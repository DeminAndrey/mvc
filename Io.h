#pragma once

#include "Model/Model.h"

#include <string>

namespace io {
bool exportDocument(
    const std::map<FigureType, std::vector<std::shared_ptr<Shape>>> &figures,
    const std::string &file);
std::map<FigureType, std::vector<std::shared_ptr<Shape>>> importDocument(
    const std::string &file);
} // namespace
