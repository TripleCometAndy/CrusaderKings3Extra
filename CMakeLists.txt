cmake_minimum_required(VERSION 3.20)

# set the project name
project(CrusaderKings3Extra)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#enable compiler warnings
if(CMAKE_CXX_COMPILER_ID STREQUAL "Clang" OR CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    target_compile_options(CrusaderKings3Extra PRIVATE -Wall -Wextra)
endif()

option(CK3E_BUILD_TESTS "Build tests" ON)

add_library(${PROJECT_NAME}Lib)
target_sources(${PROJECT_NAME}Lib PRIVATE
  include/GenerateProvinceMap.h
  include/MapStructure.h
  include/MapEdge.h
  src/main.cpp
  src/GenerateProvinceMap.cpp
  src/MapStructure.cpp
)

target_include_directories(${PROJECT_NAME}Lib PUBLIC include)

add_executable(${PROJECT_NAME})
target_sources(${PROJECT_NAME} PRIVATE
  src/main.cpp
  src/GenerateProvinceMap.cpp
  src/MapStructure.cpp
  src/MapEdge.cpp
)
target_link_libraries(${PROJECT_NAME} PRIVATE ${PROJECT_NAME}Lib)

if(CK3E_BUILD_TESTS)
  enable_testing()

  include(FetchContent)

  FetchContent_Declare(
	googletest
	GIT_REPOSITORY https://github.com/TripleCometAndy/googletest
	GIT_TAG 0320f517fd920866d918e564105d68fd4362040a
  )

  FetchContent_MakeAvailable(googletest)

  add_executable(${PROJECT_NAME}Tests)
  target_sources(${PROJECT_NAME}Tests PRIVATE
    tests/src/main.cpp
  )
  
  target_include_directories(${PROJECT_NAME}Tests PRIVATE tests/include)

  target_link_libraries(${PROJECT_NAME}Tests PRIVATE ${PROJECT_NAME}Lib gtest_main gmock)
  add_test(NAME ${PROJECT_NAME}Tests COMMAND ${PROJECT_NAME}Tests)
endif()