#include "Controller.h"
#include "Widget.h"

#include <iostream>

int main() {

  auto controller = std::make_shared<Controller>();
  auto widget = std::make_unique<Widget>(controller);
  widget->show();

  widget->pressButtonAddLine();
  widget->pressButtonAddCircle();
  widget->pressButtonAddRectangle();

  widget->close();

  return 0;
}
