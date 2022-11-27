#pragma once

#include <map>
#include <memory>
#include <vector>

/**
 * @brief тип создаваемой фигуры
 */
enum FigureType {
  LINE,
  CIRCLE,
  RECTANGLE
};

class Shape;

/**
 * @brief класс модели
 */
class Model {
  std::map<FigureType, std::vector<std::shared_ptr<Shape>>> m_figures;

public:
  Model() = default;

  const std::map<FigureType,
    std::vector<std::shared_ptr<Shape>>> &getData() const;

  /**
   * @brief добавление фигуры в контейнер
   * @param type тип добавляемой фигуры
   */
  void addShape(FigureType type);
  /**
   * @brief удаление фигуры из контейнера
   * @param type тип удаляемой фигуры
   */
  void removeShape(FigureType type);
  /**
   * @brief очистка контейнера модели
   */
  void clear();
};

