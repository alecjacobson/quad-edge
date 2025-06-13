cmake_minimum_required(VERSION 3.16.0)
project(cell)

set(LIBCELL_SRC 
  vertex.cc
  edge.cc
  face.cc
  cell.cc
  array.cc
  list.cc
  obj.cc
)

# add svl in this directory as a system include

add_library(cell STATIC ${LIBCELL_SRC})
target_include_directories(cell PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/svl/..)

add_executable(test test.cc)
target_include_directories(test PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/svl/..)
target_link_libraries(test cell)
