cmake_minimum_required(VERSION 3.20)

# set the project name
project(CrusaderKings3Extra)

enable_testing()

include(FetchContent)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#enable compiler warnings
if(CMAKE_CXX_COMPILER_ID STREQUAL "Clang" OR CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    target_compile_options(CrusaderKings3Extra PRIVATE -Wall -Wextra)
endif()

add_executable(CrusaderKings3Extra)

target_include_directories(CrusaderKings3Extra PRIVATE
    include
    src
)

target_link_libraries(CrusaderKings3Extra)

add_subdirectory(src)
add_subdirectory(tests)