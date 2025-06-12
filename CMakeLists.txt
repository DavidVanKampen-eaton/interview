cmake_minimum_required(VERSION 3.14)
project(string_score)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add source files
add_library(string_score_lib src/string_score.cpp)
target_include_directories(string_score_lib PUBLIC src)

# Google Test
include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG release-1.11.0
)
FetchContent_MakeAvailable(googletest)

# Enable testing
enable_testing()

# Add test executable
add_executable(string_score_test test/string_score_test.cpp)
target_link_libraries(string_score_test
  PRIVATE
    string_score_lib
    gtest_main
)

# Add tests to CTest
include(GoogleTest)
gtest_discover_tests(string_score_test)
