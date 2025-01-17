/*
 * Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
 * Copyright (C) 2022-present The WebF authors. All rights reserved.
 */

#include "event_type_names.h"
#include <algorithm>
#include <vector>

namespace webf::binding::qjs {

static std::vector<std::string> eventTypeNames{
    "onabort",
    "onanimationend",
    "onanimationiteration",
    "onanimationstart",
    "onblur",
    "oncancel",
    "oncanplay",
    "oncanplaythrough",
    "onchange",
    "onclick",
    "ondblclick",
    "ondrag",
    "ondragend",
    "ondragenter",
    "ondragleave",
    "ondragover",
    "ondragstart",
    "onended",
    "onkeydown",
    "onkeypress",
    "onkeyup",
    "onclose",
    "onerror",
    "oninput",
    "onload",
    "onmousedown",
    "onmouseenter",
    "onmouseleave",
    "onmousemove",
    "onmouseout",
    "onmouseover",
    "onmouseup",
    "onpause",
    "onplay",
    "onplaying",
    "onscroll",
    "ontouchcancel",
    "ontouchend",
    "ontouchmove",
    "ontouchstart",
    "ontransitioncancel",
    "ontransitionend",
    "ontransitionrun",
    "ontransitionstart",
};

bool qjs::EventTypeNames::isEventTypeName(const std::string& name) {
  return std::find(eventTypeNames.begin(), eventTypeNames.end(), name) != eventTypeNames.end();
}

}  // namespace webf::binding::qjs
