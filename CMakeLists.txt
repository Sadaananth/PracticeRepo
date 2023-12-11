cmake_minimum_required(VERSION 3.16)

project(HashMap)

# add_subdirectory(src)

set(UNIT_TESTS ON)

if("${UNIT_TESTS}" MATCHES "ON")
    message("came here")
    enable_testing()
    add_subdirectory(tests)
endif()
message("came here2")
