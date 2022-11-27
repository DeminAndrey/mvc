#pragma once

#include "../Model/Model.h"

/**
 * @brief типы запросов
 */
enum Requests {
  ADD_LINE = 0,
  REMOVE_LINE,
  ADD_RECTANGLE,
  REMOVE_RECTANGLE,
  ADD_CIRCLE,
  REMOVE_CIRCLE,
};

/**
 * @brief класс контроллера
 */
class Controller {
  std::shared_ptr<Model> m_model;

public:
  Controller();

  /**
   * @brief обработчик запросов с фронта от пользователя
   * (обновляет модель)
   * @param action запрос
   * @return успешность обработки запроса
   */
  [[nodiscard]] bool handleRequest(Requests action);

  /**
   * @brief импорт документа
   */
  void importDoc();
  /**
   * @brief экспорт документа
   */
  void exportDoc();
};

