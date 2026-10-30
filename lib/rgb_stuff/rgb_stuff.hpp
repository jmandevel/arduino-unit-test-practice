#pragma once

enum class Color { none, red, orange, yellow, green, blue, indigo, violet };

struct Rgb {
  unsigned char r;
  unsigned char g;
  unsigned char b;

  Rgb(unsigned char r, unsigned char g, unsigned char b) : r(r), g(g), b(b) {}

  [[nodiscard]] inline bool operator==(const Rgb &rhs) const {
    return this->r == rhs.r && this->g == rhs.g && this->b == rhs.b;
  }
};

inline Color nextColor(Color color) {
  switch (color) {
  case Color::none:
    return Color::none;
  case Color::red:
    return Color::orange;
  case Color::orange:
    return Color::yellow;
  case Color::yellow:
    return Color::green;
  case Color::green:
    return Color::blue;
  case Color::blue:
    return Color::indigo;
  case Color::indigo:
    return Color::violet;
  case Color::violet:
    return Color::red;
  }
  return Color::none;
}

inline Rgb getRgb(Color color) {
  switch (color) {
  case Color::red:
    return {255, 0, 0};
  case Color::orange:
    return {255, 165, 0};
  case Color::yellow:
    return {255, 255, 0};
  case Color::green:
    return {0, 255, 0};
  case Color::blue:
    return {0, 0, 255};
  case Color::indigo:
    return {75, 0, 130};
  case Color::violet:
    return {238, 130, 238};
  }
  return {0, 0, 0};
}