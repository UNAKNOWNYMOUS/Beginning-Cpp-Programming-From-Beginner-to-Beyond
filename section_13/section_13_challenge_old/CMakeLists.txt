cmake_minimum_required(VERSION 3.20)
project(MyApp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(myapp
  src/main.cpp
  src/Movie.cpp
  src/Movies.cpp
)

target_include_directories(myapp PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}/include
)
