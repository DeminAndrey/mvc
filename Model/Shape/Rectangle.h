#pragma once

#include "Shape.h"

/**
 * @brief класс прямоугольник
 */
class Rectangle : public Shape {
  double m_width;
  double m_height;

public:
  explicit Rectangle(double width = 1.0,
                     double height = 1.0)
    : Shape(), m_width(width), m_height(height) {
  }
  ~Rectangle() = default;

  std::ofstream &operator<< (std::ofstream &out) const override {
    // out
    return out;
  }
};

