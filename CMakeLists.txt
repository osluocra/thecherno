cmake_minimum_required(VERSION 3.15)
project(thecherno)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(branches)
include_directories(contructors)
include_directories("how c++ works")
include_directories(inheritance)
include_directories("virtual functions")

add_executable(thecherno
        main_arrays.cpp
  )
