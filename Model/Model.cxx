#include "Model.h"

#include "Shape/Circle.h"
#include "Shape/Line.h"
#include "Shape/Rectangle.h"

const std::map<FigureType,
  std::vector<std::shared_ptr<Shape>>> &Model::getData() const {
  return m_figures;
}

void Model::addShape(FigureType type) {
  switch (type) {
  case LINE : {
    m_figures[type].push_back(std::make_shared<Line>());
    break;
  }
  case CIRCLE : {
    m_figures[type].push_back(std::make_shared<Circle>());
    break;
  }
  case RECTANGLE : {
    m_figures[type].push_back(std::make_shared<Rectangle>());
    break;
  }
  default: {
    // error
  }
  }
}

void Model::removeShape(FigureType type) {
  switch (type) {
  case LINE : {
    // remove
    break;
  }
  case CIRCLE : {
    // remove
    break;
  }
  case RECTANGLE : {
    // remove
    break;
  }
  default: {
    // error
  }
  }
}

void Model::clear() {
  m_figures.clear();
}
