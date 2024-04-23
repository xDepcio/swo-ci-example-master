cmake_minimum_required(VERSION 3.1.0)
project(CiExample VERSION 0.1.0)

set (CMAKE_CXX_STANDARD 17)

add_compile_options(-Wall -Wextra -pedantic -Werror)

include_directories(lib)

enable_testing()

add_subdirectory(lib)
add_subdirectory(tests)
