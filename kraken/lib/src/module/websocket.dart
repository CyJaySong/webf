import 'package:web_socket_channel/io.dart';
import 'dart:convert';
import 'dart:io';
import '../element/event.dart';
import 'package:kraken/bridge.dart';

enum _ConnectionState { closed }

class _WebSocketState {
  _ConnectionState status;
  dynamic data;
  _WebSocketState(this.status);
}

Map<String, IOWebSocketChannel> _clientMap = {};
Map<String, Map<String, bool>> _listenMap = {};
Map<String, _WebSocketState> _stateMap = {};
int _clientId = 0;

class KrakenWebSocket {
  static String init(String url, {String protocols}) {
    var id = (_clientId++).toString();
    WebSocket.connect(url, protocols: [protocols]).then((webSocket) {
      IOWebSocketChannel client = IOWebSocketChannel(webSocket);
      _WebSocketState state = _stateMap[id];
      if (state != null && state.status == _ConnectionState.closed) {
        dynamic data = state.data;
        webSocket.close(data[0], data[1]);
        CloseEvent event = CloseEvent(data[0], data[1], true);
        emitModuleEvent('["WebSocket", $id, ${jsonEncode(event)}]');
        _stateMap.remove(id);
        return;
      }
      _clientMap[id] = client;
      // Listen all event
      _listen(id);
      // Emit open event
      String type = 'open';
      if (_hasListener(id, type)) {
        Event event = Event(type);
        emitModuleEvent('["WebSocket", $id, ${jsonEncode(event)}]');
      }
    }).catchError((e, stack) {
      // print connection error internally and trigger error event.
      print(e);
      Event event = Event('error');
      emitModuleEvent('["WebSocket", $id, ${jsonEncode(event)}]');
    });

    return id;
  }

  static void send(String id, String message) {
    IOWebSocketChannel client = _clientMap[id];

    if (client == null) return;

    client.sink.add(message);
  }

  static void close(String id, [int closeCode, String closeReason]) {
    IOWebSocketChannel client = _clientMap[id];
    // has not connect
    if (client == null) {
      if (!_stateMap.containsKey(id)) {
        _WebSocketState state = _WebSocketState(_ConnectionState.closed);
        state.data = [closeCode, closeReason];
        _stateMap[id] = state;
      } else {
        _WebSocketState state = _stateMap[id];
        state.status = _ConnectionState.closed;
        state.data = [closeCode, closeReason];
      }
      return;
    }
    // connected
    client.sink.close(closeCode, closeReason);
  }

  static bool _hasListener(String id, String type) {
    var listeners = _listenMap[id];
    return listeners.containsKey(type);
  }

  static void _listen(String id) {
    IOWebSocketChannel client = _clientMap[id];

    client.stream.listen((message) {
      String type = 'message';
      if (!_hasListener(id, type)) return;
      MessageEvent event = MessageEvent(message);
      emitModuleEvent('["WebSocket", $id, ${jsonEncode(event)}]');
    }, onError: (error) {
      String type = 'error';
      if (!_hasListener(id, type)) return;
      // print error internally and trigger error event;
      print(error);
      Event event = Event(type);
      emitModuleEvent('["WebSocket", $id, ${jsonEncode(event)}]');
    }, onDone: () {
      String type = 'close';
      if (_hasListener(id, type)) {
        // CloseEvent https://developer.mozilla.org/en-US/docs/Web/API/CloseEvent/CloseEvent
        CloseEvent event = CloseEvent(client.closeCode, client.closeReason, false);
        emitModuleEvent('["WebSocket", $id, ${jsonEncode(event)}]');
      }
      // Clear instance after close
      _listenMap.remove(id);
      _clientMap.remove(id);
      _stateMap.remove(id);
    });
  }

  static void addEvent(String id, String type) {
    if (!_listenMap.containsKey(id)) {
      // Init listener map
      _listenMap[id] = {};
    }

    // Mark event type listened
    var listeners = _listenMap[id];
    listeners[type] = true;
  }
}