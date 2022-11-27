#pragma once

#include "Shape.h"

#include <iostream>

/**
 * @brief класс линия
 */
class Line : public Shape {
  double m_lenght;

public:
  explicit Line(double lenght = 1.0)
    : Shape(), m_lenght(lenght) {
  }
  ~Line() = default;

  std::ofstream &operator<< (std::ofstream &out) const override {
    // out
    return out;
  }
};
