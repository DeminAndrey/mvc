#pragma once

#include <fstream>

/**
 * @brief базовый абстрактный класс фигуры
 */
class Shape {
  struct Point {
    double x = 0;
    double y = 0;
  };
  Point m_center;

public:
  Shape() = default;
  virtual ~Shape() = default;

  /**
   * @brief перегруженный оператор выводы фигуры в файловый поток
   * @param out файловый поток
   * @return файловый поток
   */
  virtual std::ofstream &operator<< (std::ofstream &out) const = 0;
};

inline std::ofstream &operator<< (std::ofstream &out, const Shape &shape) {
  return shape.operator<<(out);
}
