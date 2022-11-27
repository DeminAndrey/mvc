#include "Controller.h"

#include "../Io.h"

#include <filesystem>

static const std::string FILENAME = "doc";

Controller::Controller()
  : m_model(std::make_shared<Model>()) {
}

bool Controller::handleRequest(Requests action) {
  switch (action) {
  case ADD_LINE : {
    m_model->addShape(FigureType::LINE);
    break;
  }
  case ADD_RECTANGLE : {
    m_model->addShape(FigureType::RECTANGLE);
    break;
  }
  case ADD_CIRCLE : {
    m_model->addShape(FigureType::CIRCLE);
    break;
  }
  case REMOVE_LINE : {
    m_model->removeShape(FigureType::LINE);
    break;
  }
  case REMOVE_RECTANGLE : {
    m_model->removeShape(FigureType::RECTANGLE);
    break;
  }
  case REMOVE_CIRCLE : {
    m_model->removeShape(FigureType::CIRCLE);
    break;
  }
  default: {
    // error
    return false;
  }
  }
  return true;
}

void Controller::importDoc() {
  auto file = std::filesystem::current_path()
      .append(FILENAME).string();
  auto shapes = io::importDocument(file);
}

void Controller::exportDoc() {
  auto file = std::filesystem::current_path()
      .append(FILENAME).string();
  io::exportDocument(m_model->getData(), file);
}
