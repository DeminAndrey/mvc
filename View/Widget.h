#pragma once

#include "Controller.h"

#include <memory>


class Widget {
  std::shared_ptr<Controller> m_controller;

public:
  explicit Widget(std::shared_ptr<Controller> controller);

  void show();
  void close();

  void pressButtonAddLine();
  void pressButtonRemoveLine();

  void pressButtonAddRectangle();
  void pressButtonRemoveRectangle();

  void pressButtonAddCircle();
  void pressButtonRemoveCircle();

private:
  void instance();
};
