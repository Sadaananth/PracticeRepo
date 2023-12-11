set(CMAKE_CXX_STANDARD 20)

set(SOURCES Hashmap.cpp)

add_library(Hashmap SHARED ${SOURCES})
target_include_directories(Hashmap PUBLIC ./)
