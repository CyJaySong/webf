![kraken Post](https://user-images.githubusercontent.com/677114/101163298-6264ae80-366e-11eb-9151-f560d18c2ceb.png)

# [Kraken](https://openkraken.com/) [![pub package](https://img.shields.io/pub/v/kraken.svg)](https://pub.dev/packages/kraken) [![Integration Test WorkFlow](https://github.com/openkraken/kraken/actions/workflows/integration_test.yml/badge.svg?branch=main)](https://github.com/openkraken/kraken/actions/workflows/integration_test.yml)

## 💁 Have a try

1. Install Kraken CLI (macOS, Linux only currently)

    ```shell
    $ npm i @openkraken/cli -g
    ```

2. Open with kraken

    ```shell
    $ kraken run https://raw.githubusercontent.com/openkraken/kraken/master/kraken/example/assets/bundle.js
    ```

## 💌 Why kraken

* Quick development 🎉

  Compatibility with web standards means you don't have to change your stack.
  ```js
  const text = document.createTextNode('Hello World!');
  document.body.appendChild(text);
  ```

* Cross platform ⚛️

  [Seamless integration with Flutter](https://pub.dev/packages/kraken), supports web, mobile (iOS, Android) and desktop (MacOS, Linux, Windows).

* Fast performance 🚀

  Provide native-like performance such as navigation, animation and infinite list scrolling.

## Flutter version scope

Only flutter stable released version are fully tested.

| Kraken  | Flutter |
| ------------- | ------------- |
| >= 0.7.0 < 0.8.0 | 1.22.0 ~ 1.22.6 |
| >= 0.8.0 < 0.10.0  | 2.2.0 ~ 2.2.3 |
| >= 0.10.0 < 0.12.0 | 2.5.0 ~ 2.5.3 |


## 👏 Contributing [![PRs Welcome](https://img.shields.io/badge/PRs-welcome-brightgreen.svg?style=flat-square)](https://makeapullrequest.com)

By contributing to Kraken, you agree that your contributions will be licensed under its Apache-2.0 License.

Read our [contributing guide](https://openkraken.com/guide/contribute/environment) and let's build a better kraken project together.

0. Prerequisites
    * [Node.js](https://nodejs.org/) v12.0 or later
    * [Flutter](https://flutter.dev/docs/get-started/install) version in the `kraken/pubspec.yaml`
    * [CMake](https://cmake.org/) v3.2.0 or later
    * [Xcode](https://developer.apple.com/xcode/) (10.12) or later (Running on macOS or iOS)
    * [Android NDK](https://developer.android.com/studio/projects/install-ndk) version `21.4.7075529` (Running on Android)

1. Install

    ```shell
    $ npm install
    ```

2. Building bridge

    Building bridge for all supported platform (macOS, linux, iOS, Android)

    ```shell
    $ npm run build:bridge:all
    ```

    Building bridge for one platform

    **macOS**

    ```shell
    $ npm run build:bridge:macos
    ```

    **linux**

    ```shell
    $ npm run build:bridge:linux
    ```

    **iOS**

    ```shell
    $ npm run build:bridge:ios
    ```

    **Android**

    > For Windows users, make sure that running this command under MINGW64 environment(eg. Git Bash).

    ```shell
    $ npm run build:bridge:android
    ```

3. Start example
    ```shell
    $ cd kraken/example
    $ flutter run
    ```

4. Test (Unit Test and Integration Test)
    ```shell
    $ npm test
    ```

## Authors

![](https://github.com/Airing.png?size=40) ![](https://github.com/Airing.png?size=40) ![](https://github.com/airingdeng.png?size=40) ![](https://github.com/anjihang.png?size=40) ![](https://github.com/anjihang.png?size=40) ![](https://github.com/boiawang.png?size=40) ![](https://github.com/haonan.whn.png?size=40) ![](https://github.com/jiangzhou.png?size=40) ![](https://github.com/lzl.png?size=40) ![](https://github.com/openkraken-bot.png?size=40) ![](https://github.com/qinxuliang.png?size=40) ![](https://github.com/ranmo.cy.png?size=40) ![](https://github.com/ranmo.cy.png?size=40) ![](https://github.com/suyulin.png?size=40) ![](https://github.com/tylorvan.fzm.png?size=40) ![](https://github.com/xiaolun.zxl.png?size=40) ![](https://github.com/ZeroLing.png?size=40) ![](https://github.com/zhanwen.zw.png?size=40) ![](https://github.com/不求圣剑.png?size=40) ![](https://github.com/任跃兵.png?size=40) ![](https://github.com/任跃兵.png?size=40) ![](https://github.com/元彦.png?size=40) ![](https://github.com/元彦.png?size=40) ![](https://github.com/卓凌.png?size=40) ![](https://github.com/史胜龙.png?size=40) ![](https://github.com/晟怀.png?size=40) ![](https://github.com/清扬陌客.png?size=40) ![](https://github.com/苏昱霖.png?size=40) ![](https://github.com/董天成.png?size=40)
