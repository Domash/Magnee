#include "Color.h"

Color::Color() {
    r = g = b = a = 0.0f;
}

Color::Color(float aR, float aG, float aB, float aA)
    : r(aR), g(aG), b(aB), a(aA) {}

Color Color::Rgb(uint32_t rgb) const {
    return {
        ((rgb >> 16) & 0xff) / rgbaMax,
        ((rgb >> 8) & 0xff) / rgbaMax,
        (rgb & 0xff) / rgbaMax,
    };
}

Color Color::Rgba(uint32_t rgba) const {
    return {
        ((rgb >> 24) & 0xff) / rgbaMax,
        ((rgb >> 16) & 0xff) / rgbaMax,
        ((rgb >> 8) & 0xff) / rgbaMax,
        (rgb & 0xff) / rgbaMax,
    };
}

Color Color::Rgb(uint8_t r, uint8_t g, uint8_t b) const {
    return {
        r / rgbaMax,
        g / rgbaMax,
        b / rgbaMax
    };
}

Color Color::Rgba(uint8_t r, uint8_t g, uint8_t b, uint8_t a) const {
    return {
        r / rgbaMax,
        g / rgbaMax,
        b / rgbaMax,
        a / rgbaMax
    };
}