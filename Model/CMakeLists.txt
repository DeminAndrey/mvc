
add_library(model
  Model.h
  Model.cxx
  Shape/Shape.h
  Shape/Line.h
  Shape/Circle.h
  Shape/Rectangle.h
)

set(CMAKE_INCLUDE_CURRENT_DIR_IN_INTERFACE ON)
