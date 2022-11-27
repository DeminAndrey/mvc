#include "Widget.h"

#include "iostream"

Widget::Widget(std::shared_ptr<Controller> controller)
  : m_controller(controller) {
  instance();
}

void Widget::pressButtonAddLine() {
  [[maybe_unused]] auto success =
      m_controller->handleRequest(Requests::ADD_LINE);
  if (success) std::cout << "figure LINE has been added!"
                         << std::endl;
}

void Widget::pressButtonRemoveLine() {
  [[maybe_unused]] auto success =
      m_controller->handleRequest(Requests::REMOVE_LINE);
  if (success) std::cout << "figure LINE has been removed!"
                         << std::endl;
}

void Widget::pressButtonAddRectangle() {
  [[maybe_unused]] auto success =
      m_controller->handleRequest(Requests::ADD_RECTANGLE);
  if (success) std::cout << "figure RECTANGLE has been added!"
                         << std::endl;
}

void Widget::pressButtonRemoveRectangle() {
  [[maybe_unused]] auto success =
      m_controller->handleRequest(Requests::REMOVE_RECTANGLE);
  if (success) std::cout << "figure RECTANGLE has been removed!"
                         << std::endl;
}

void Widget::pressButtonAddCircle() {
  [[maybe_unused]] auto success =
      m_controller->handleRequest(Requests::ADD_CIRCLE);
  if (success) std::cout << "figure CIRCLE has been added!"
                         << std::endl;
}

void Widget::pressButtonRemoveCircle() {
  [[maybe_unused]] auto success =
      m_controller->handleRequest(Requests::REMOVE_CIRCLE);
  if (success) std::cout << "figure CIRCLE has been removed!"
                         << std::endl;
}

void Widget::show() {

}

void Widget::close() {

}

void Widget::instance() {
  // create buttons
}
