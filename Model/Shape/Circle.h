#pragma once

#include "Shape.h"

/**
 * @brief класс окружность
 */
class Circle : public Shape {
  double m_radius;

public:
  explicit Circle(double radius = 1.0)
    : Shape(), m_radius(radius) {
  }
  ~Circle() = default;

  std::ofstream &operator<< (std::ofstream &out) const override {
    // out
    return out;
  }
};
