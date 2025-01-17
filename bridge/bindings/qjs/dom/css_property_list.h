/*
 * Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
 * Copyright (C) 2022-present The WebF authors. All rights reserved.
 */

#ifndef BRIDGE_BINDINGS_QJS_DOM_CSS_PROPERTY_LIST_H_
#define BRIDGE_BINDINGS_QJS_DOM_CSS_PROPERTY_LIST_H_

#include <string>
#include <unordered_map>

namespace webf {

std::unordered_map<std::string, bool> cssPropertyList{{"accentColor", true},
                                                      {"additiveSymbols", true},
                                                      {"alignContent", true},
                                                      {"alignItems", true},
                                                      {"alignSelf", true},
                                                      {"alignmentBaseline", true},
                                                      {"all", true},
                                                      {"animation", true},
                                                      {"animationDelay", true},
                                                      {"animationDirection", true},
                                                      {"animationDuration", true},
                                                      {"animationFillMode", true},
                                                      {"animationIterationCount", true},
                                                      {"animationName", true},
                                                      {"animationPlayState", true},
                                                      {"animationTimingFunction", true},
                                                      {"appRegion", true},
                                                      {"appearance", true},
                                                      {"ascentOverride", true},
                                                      {"aspectRatio", true},
                                                      {"backdropFilter", true},
                                                      {"backfaceVisibility", true},
                                                      {"background", true},
                                                      {"backgroundAttachment", true},
                                                      {"backgroundBlendMode", true},
                                                      {"backgroundClip", true},
                                                      {"backgroundColor", true},
                                                      {"backgroundImage", true},
                                                      {"backgroundOrigin", true},
                                                      {"backgroundPosition", true},
                                                      {"backgroundPositionX", true},
                                                      {"backgroundPositionY", true},
                                                      {"backgroundRepeat", true},
                                                      {"backgroundRepeatX", true},
                                                      {"backgroundRepeatY", true},
                                                      {"backgroundSize", true},
                                                      {"baselineShift", true},
                                                      {"blockSize", true},
                                                      {"border", true},
                                                      {"borderBlock", true},
                                                      {"borderBlockColor", true},
                                                      {"borderBlockEnd", true},
                                                      {"borderBlockEndColor", true},
                                                      {"borderBlockEndStyle", true},
                                                      {"borderBlockEndWidth", true},
                                                      {"borderBlockStart", true},
                                                      {"borderBlockStartColor", true},
                                                      {"borderBlockStartStyle", true},
                                                      {"borderBlockStartWidth", true},
                                                      {"borderBlockStyle", true},
                                                      {"borderBlockWidth", true},
                                                      {"borderBottom", true},
                                                      {"borderBottomColor", true},
                                                      {"borderBottomLeftRadius", true},
                                                      {"borderBottomRightRadius", true},
                                                      {"borderBottomStyle", true},
                                                      {"borderBottomWidth", true},
                                                      {"borderCollapse", true},
                                                      {"borderColor", true},
                                                      {"borderEndEndRadius", true},
                                                      {"borderEndStartRadius", true},
                                                      {"borderImage", true},
                                                      {"borderImageOutset", true},
                                                      {"borderImageRepeat", true},
                                                      {"borderImageSlice", true},
                                                      {"borderImageSource", true},
                                                      {"borderImageWidth", true},
                                                      {"borderInline", true},
                                                      {"borderInlineColor", true},
                                                      {"borderInlineEnd", true},
                                                      {"borderInlineEndColor", true},
                                                      {"borderInlineEndStyle", true},
                                                      {"borderInlineEndWidth", true},
                                                      {"borderInlineStart", true},
                                                      {"borderInlineStartColor", true},
                                                      {"borderInlineStartStyle", true},
                                                      {"borderInlineStartWidth", true},
                                                      {"borderInlineStyle", true},
                                                      {"borderInlineWidth", true},
                                                      {"borderLeft", true},
                                                      {"borderLeftColor", true},
                                                      {"borderLeftStyle", true},
                                                      {"borderLeftWidth", true},
                                                      {"borderRadius", true},
                                                      {"borderRight", true},
                                                      {"borderRightColor", true},
                                                      {"borderRightStyle", true},
                                                      {"borderRightWidth", true},
                                                      {"borderSpacing", true},
                                                      {"borderStartEndRadius", true},
                                                      {"borderStartStartRadius", true},
                                                      {"borderStyle", true},
                                                      {"borderTop", true},
                                                      {"borderTopColor", true},
                                                      {"borderTopLeftRadius", true},
                                                      {"borderTopRightRadius", true},
                                                      {"borderTopStyle", true},
                                                      {"borderTopWidth", true},
                                                      {"borderWidth", true},
                                                      {"bottom", true},
                                                      {"boxShadow", true},
                                                      {"boxSizing", true},
                                                      {"breakAfter", true},
                                                      {"breakBefore", true},
                                                      {"breakInside", true},
                                                      {"bufferedRendering", true},
                                                      {"captionSide", true},
                                                      {"caretColor", true},
                                                      {"clear", true},
                                                      {"clip", true},
                                                      {"clipPath", true},
                                                      {"clipRule", true},
                                                      {"color", true},
                                                      {"colorInterpolation", true},
                                                      {"colorInterpolationFilters", true},
                                                      {"colorRendering", true},
                                                      {"colorScheme", true},
                                                      {"columnCount", true},
                                                      {"columnFill", true},
                                                      {"columnGap", true},
                                                      {"columnRule", true},
                                                      {"columnRuleColor", true},
                                                      {"columnRuleStyle", true},
                                                      {"columnRuleWidth", true},
                                                      {"columnSpan", true},
                                                      {"columnWidth", true},
                                                      {"columns", true},
                                                      {"content", true},
                                                      {"contentVisibility", true},
                                                      {"counterIncrement", true},
                                                      {"counterReset", true},
                                                      {"counterSet", true},
                                                      {"cursor", true},
                                                      {"cx", true},
                                                      {"cy", true},
                                                      {"d", true},
                                                      {"descentOverride", true},
                                                      {"direction", true},
                                                      {"display", true},
                                                      {"dominantBaseline", true},
                                                      {"emptyCells", true},
                                                      {"fallback", true},
                                                      {"fill", true},
                                                      {"fillOpacity", true},
                                                      {"fillRule", true},
                                                      {"filter", true},
                                                      {"flex", true},
                                                      {"flexBasis", true},
                                                      {"flexDirection", true},
                                                      {"flexFlow", true},
                                                      {"flexGrow", true},
                                                      {"flexShrink", true},
                                                      {"flexWrap", true},
                                                      {"float", true},
                                                      {"floodColor", true},
                                                      {"floodOpacity", true},
                                                      {"font", true},
                                                      {"fontDisplay", true},
                                                      {"fontFamily", true},
                                                      {"fontFeatureSettings", true},
                                                      {"fontKerning", true},
                                                      {"fontOpticalSizing", true},
                                                      {"fontSize", true},
                                                      {"fontStretch", true},
                                                      {"fontStyle", true},
                                                      {"fontSynthesis", true},
                                                      {"fontSynthesisSmallCaps", true},
                                                      {"fontSynthesisStyle", true},
                                                      {"fontSynthesisWeight", true},
                                                      {"fontVariant", true},
                                                      {"fontVariantCaps", true},
                                                      {"fontVariantEastAsian", true},
                                                      {"fontVariantLigatures", true},
                                                      {"fontVariantNumeric", true},
                                                      {"fontVariationSettings", true},
                                                      {"fontWeight", true},
                                                      {"forcedColorAdjust", true},
                                                      {"gap", true},
                                                      {"grid", true},
                                                      {"gridArea", true},
                                                      {"gridAutoColumns", true},
                                                      {"gridAutoFlow", true},
                                                      {"gridAutoRows", true},
                                                      {"gridColumn", true},
                                                      {"gridColumnEnd", true},
                                                      {"gridColumnGap", true},
                                                      {"gridColumnStart", true},
                                                      {"gridGap", true},
                                                      {"gridRow", true},
                                                      {"gridRowEnd", true},
                                                      {"gridRowGap", true},
                                                      {"gridRowStart", true},
                                                      {"gridTemplate", true},
                                                      {"gridTemplateAreas", true},
                                                      {"gridTemplateColumns", true},
                                                      {"gridTemplateRows", true},
                                                      {"height", true},
                                                      {"hyphens", true},
                                                      {"imageOrientation", true},
                                                      {"imageRendering", true},
                                                      {"inherits", true},
                                                      {"initialValue", true},
                                                      {"inlineSize", true},
                                                      {"inset", true},
                                                      {"insetBlock", true},
                                                      {"insetBlockEnd", true},
                                                      {"insetBlockStart", true},
                                                      {"insetInline", true},
                                                      {"insetInlineEnd", true},
                                                      {"insetInlineStart", true},
                                                      {"isolation", true},
                                                      {"justifyContent", true},
                                                      {"justifyItems", true},
                                                      {"justifySelf", true},
                                                      {"left", true},
                                                      {"letterSpacing", true},
                                                      {"lightingColor", true},
                                                      {"lineBreak", true},
                                                      {"lineGapOverride", true},
                                                      {"lineHeight", true},
                                                      {"listStyle", true},
                                                      {"listStyleImage", true},
                                                      {"listStylePosition", true},
                                                      {"listStyleType", true},
                                                      {"margin", true},
                                                      {"marginBlock", true},
                                                      {"marginBlockEnd", true},
                                                      {"marginBlockStart", true},
                                                      {"marginBottom", true},
                                                      {"marginInline", true},
                                                      {"marginInlineEnd", true},
                                                      {"marginInlineStart", true},
                                                      {"marginLeft", true},
                                                      {"marginRight", true},
                                                      {"marginTop", true},
                                                      {"marker", true},
                                                      {"markerEnd", true},
                                                      {"markerMid", true},
                                                      {"markerStart", true},
                                                      {"mask", true},
                                                      {"maskType", true},
                                                      {"maxBlockSize", true},
                                                      {"maxHeight", true},
                                                      {"maxInlineSize", true},
                                                      {"maxWidth", true},
                                                      {"maxZoom", true},
                                                      {"minBlockSize", true},
                                                      {"minHeight", true},
                                                      {"minInlineSize", true},
                                                      {"minWidth", true},
                                                      {"minZoom", true},
                                                      {"mixBlendMode", true},
                                                      {"negative", true},
                                                      {"objectFit", true},
                                                      {"objectPosition", true},
                                                      {"offset", true},
                                                      {"offsetDistance", true},
                                                      {"offsetPath", true},
                                                      {"offsetRotate", true},
                                                      {"opacity", true},
                                                      {"order", true},
                                                      {"orientation", true},
                                                      {"orphans", true},
                                                      {"outline", true},
                                                      {"outlineColor", true},
                                                      {"outlineOffset", true},
                                                      {"outlineStyle", true},
                                                      {"outlineWidth", true},
                                                      {"overflow", true},
                                                      {"overflowAnchor", true},
                                                      {"overflowClipMargin", true},
                                                      {"overflowWrap", true},
                                                      {"overflowX", true},
                                                      {"overflowY", true},
                                                      {"overscrollBehavior", true},
                                                      {"overscrollBehaviorBlock", true},
                                                      {"overscrollBehaviorInline", true},
                                                      {"overscrollBehaviorX", true},
                                                      {"overscrollBehaviorY", true},
                                                      {"pad", true},
                                                      {"padding", true},
                                                      {"paddingBlock", true},
                                                      {"paddingBlockEnd", true},
                                                      {"paddingBlockStart", true},
                                                      {"paddingBottom", true},
                                                      {"paddingInline", true},
                                                      {"paddingInlineEnd", true},
                                                      {"paddingInlineStart", true},
                                                      {"paddingLeft", true},
                                                      {"paddingRight", true},
                                                      {"paddingTop", true},
                                                      {"page", true},
                                                      {"pageBreakAfter", true},
                                                      {"pageBreakBefore", true},
                                                      {"pageBreakInside", true},
                                                      {"pageOrientation", true},
                                                      {"paintOrder", true},
                                                      {"perspective", true},
                                                      {"perspectiveOrigin", true},
                                                      {"placeContent", true},
                                                      {"placeItems", true},
                                                      {"placeSelf", true},
                                                      {"pointerEvents", true},
                                                      {"position", true},
                                                      {"prefix", true},
                                                      {"quotes", true},
                                                      {"r", true},
                                                      {"range", true},
                                                      {"resize", true},
                                                      {"right", true},
                                                      {"rowGap", true},
                                                      {"rubyPosition", true},
                                                      {"rx", true},
                                                      {"ry", true},
                                                      {"scrollBehavior", true},
                                                      {"scrollMargin", true},
                                                      {"scrollMarginBlock", true},
                                                      {"scrollMarginBlockEnd", true},
                                                      {"scrollMarginBlockStart", true},
                                                      {"scrollMarginBottom", true},
                                                      {"scrollMarginInline", true},
                                                      {"scrollMarginInlineEnd", true},
                                                      {"scrollMarginInlineStart", true},
                                                      {"scrollMarginLeft", true},
                                                      {"scrollMarginRight", true},
                                                      {"scrollMarginTop", true},
                                                      {"scrollPadding", true},
                                                      {"scrollPaddingBlock", true},
                                                      {"scrollPaddingBlockEnd", true},
                                                      {"scrollPaddingBlockStart", true},
                                                      {"scrollPaddingBottom", true},
                                                      {"scrollPaddingInline", true},
                                                      {"scrollPaddingInlineEnd", true},
                                                      {"scrollPaddingInlineStart", true},
                                                      {"scrollPaddingLeft", true},
                                                      {"scrollPaddingRight", true},
                                                      {"scrollPaddingTop", true},
                                                      {"scrollSnapAlign", true},
                                                      {"scrollSnapStop", true},
                                                      {"scrollSnapType", true},
                                                      {"scrollbarGutter", true},
                                                      {"shapeImageThreshold", true},
                                                      {"shapeMargin", true},
                                                      {"shapeOutside", true},
                                                      {"shapeRendering", true},
                                                      {"size", true},
                                                      {"sizeAdjust", true},
                                                      {"speak", true},
                                                      {"speakAs", true},
                                                      {"src", true},
                                                      {"stopColor", true},
                                                      {"stopOpacity", true},
                                                      {"stroke", true},
                                                      {"strokeDasharray", true},
                                                      {"strokeDashoffset", true},
                                                      {"strokeLinecap", true},
                                                      {"strokeLinejoin", true},
                                                      {"strokeMiterlimit", true},
                                                      {"strokeOpacity", true},
                                                      {"strokeWidth", true},
                                                      {"suffix", true},
                                                      {"symbols", true},
                                                      {"syntax", true},
                                                      {"system", true},
                                                      {"tabSize", true},
                                                      {"tableLayout", true},
                                                      {"textAlign", true},
                                                      {"textAlignLast", true},
                                                      {"textAnchor", true},
                                                      {"textCombineUpright", true},
                                                      {"textDecoration", true},
                                                      {"textDecorationColor", true},
                                                      {"textDecorationLine", true},
                                                      {"textDecorationSkipInk", true},
                                                      {"textDecorationStyle", true},
                                                      {"textDecorationThickness", true},
                                                      {"textEmphasis", true},
                                                      {"textEmphasisColor", true},
                                                      {"textEmphasisPosition", true},
                                                      {"textEmphasisStyle", true},
                                                      {"textIndent", true},
                                                      {"textOrientation", true},
                                                      {"textOverflow", true},
                                                      {"textRendering", true},
                                                      {"textShadow", true},
                                                      {"textSizeAdjust", true},
                                                      {"textTransform", true},
                                                      {"textUnderlineOffset", true},
                                                      {"textUnderlinePosition", true},
                                                      {"top", true},
                                                      {"touchAction", true},
                                                      {"transform", true},
                                                      {"transformBox", true},
                                                      {"transformOrigin", true},
                                                      {"transformStyle", true},
                                                      {"transition", true},
                                                      {"transitionDelay", true},
                                                      {"transitionDuration", true},
                                                      {"transitionProperty", true},
                                                      {"transitionTimingFunction", true},
                                                      {"unicodeBidi", true},
                                                      {"unicodeRange", true},
                                                      {"userSelect", true},
                                                      {"userZoom", true},
                                                      {"vectorEffect", true},
                                                      {"verticalAlign", true},
                                                      {"visibility", true},
                                                      {"whiteSpace", true},
                                                      {"widows", true},
                                                      {"width", true},
                                                      {"willChange", true},
                                                      {"wordBreak", true},
                                                      {"wordSpacing", true},
                                                      {"wordWrap", true},
                                                      {"writingMode", true},
                                                      {"x", true},
                                                      {"y", true},
                                                      {"zIndex", true},
                                                      {"zoom", true}};

}  // namespace webf

#endif  // BRIDGE_BINDINGS_QJS_DOM_CSS_PROPERTY_LIST_H_
