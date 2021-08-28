#pragma once

#include <cstdint>

struct Color {
    constexpr float rgbaMax = 255.0f;

    Color() = default;
    Color(float aR, float aG, float aB, float aA = 1.0f);

    constexpr Color Rgb(uint32_t rgb) const;
    constexpr Color Rgba(uint32_t rgba) const;

    constexpr Color Rgb(uint8_t r, uint8_t g, uint8_t b) const;
    constexpr Color Rgba(uint8_t r, uint8_t g, uint8_t b, uint8_t a) const;

    float r;
    float g;
    float b;
    float a;
};

namespace Colors {
    constexpr Color black = Color::Rgb(0, 0, 0);
    constexpr Color white = Color::Rgb(255, 255, 255);
};