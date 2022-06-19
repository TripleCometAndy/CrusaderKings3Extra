cmake_minimum_required(VERSION 3.20)

# set the project name
project(CrusaderKings3ExtraTests)

include(FetchContent)

enable_testing()

# specify the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#enable compiler warnings
if(CMAKE_CXX_COMPILER_ID STREQUAL "Clang" OR CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    target_compile_options(CrusaderKings3ExtraTests PRIVATE -Wall -Wextra)
endif()

FetchContent_Declare(
	googletest
	GIT_REPOSITORY https://github.com/TripleCometAndy/googletest
	GIT_TAG 0320f517fd920866d918e564105d68fd4362040a
)

FetchContent_MakeAvailable(googletest)

add_executable(CrusaderKings3ExtraTests)

target_include_directories(CrusaderKings3ExtraTests PRIVATE
    include
    src
)

target_link_libraries(CrusaderKings3ExtraTests gtest_main)

add_subdirectory(src)

add_test(NAME CrusaderKings3ExtraTests COMMAND CrusaderKings3ExtraTests)

