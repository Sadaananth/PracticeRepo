cmake_minimum_required(VERSION 3.16)

project(HashMapGTest)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

link_directories(${PROJECT_BINARY_DIR}/../src/)

enable_testing()

add_executable(HashmapTest HashmapTest.cpp)
set_property(TARGET HashmapTest PROPERTY CXX_STANDARD 17)
target_include_directories(HashmapTest PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../src/)
target_link_libraries(HashmapTest GTest::gtest_main -lHashmap)

include(GoogleTest)
gtest_discover_tests(HashmapTest)

add_test(HashmapTest HashmapTest)

# add_executable(LoggerTest LoggerTest.cpp)
# set_property(TARGET LoggerTest PROPERTY CXX_STANDARD 17)
# target_include_directories(LoggerTest PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../src/)
# target_link_libraries(LoggerTest -lSadaLogger)
