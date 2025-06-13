cmake_minimum_required(VERSION 3.16.0)
project(cell)

set(LIBCELL_SRC 
  src/vertex.cc
  src/edge.cc
  src/face.cc
  src/cell.cc
  src/array.cc
  src/list.cc
  src/obj.cc
)

# add svl in this directory as a system include

add_library(cell STATIC ${LIBCELL_SRC})
target_include_directories(cell PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/svl/..)

add_executable(test src/test.cc)
target_include_directories(test PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/svl/..)
target_link_libraries(test cell)
