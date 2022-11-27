#include "Io.h"

#include "Shape/Line.h"

#include <fstream>

bool io::exportDocument(
    const std::map<FigureType, std::vector<std::shared_ptr<Shape>>> &shapes,
    const std::string &file) {

  std::ofstream out(file);
  for(const auto &shape : shapes) {
    for (auto s : shape.second) {
      out << *s;
    }
  }

  return true;
}

std::map<FigureType, std::vector<std::shared_ptr<Shape>>> io::
importDocument(const std::string &file) {
  return {};
}
