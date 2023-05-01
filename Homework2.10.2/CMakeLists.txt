cmake_minimum_required(VERSION 3.10)
project(Homework2.10.2)
set(SOURCE_LIB FigureSource.cpp ParallelogramSource.cpp QuadrilateralSource.cpp 
RectangleSource.cpp RhombusSource.cpp SquareSource.cpp Triangle2SideEqualSource.cpp
Triangle90Source.cpp TriangleAllEqualSource.cpp TriangleSource.cpp)
add_library(Homework2.10.2_Lib STATIC ${SOURCE_LIB})
add_executable(Homework2.10.2 Homework2.6.3.cpp)
target_link_libraries(Homework2.10.2 Homework2.10.2_Lib)