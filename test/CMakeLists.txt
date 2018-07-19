project(Test)

set(googletest_DIR ../lib/googletest)
set(src_DIR ../src)

include_directories(${src_DIR})
include_directories(${googletest_DIR}/googletest/include)
include_directories(${googletest_DIR}/googlemock/include)

set(test_SRCS gtest.cpp)

#Define your executable
add_executable(runUnitTests ${test_SRCS})

#Link with solotion
target_link_libraries(runUnitTests core)

#Link with GoogleTest
target_link_libraries( runUnitTests gtest_main)

#Link with GoogleMock
target_link_libraries(runUnitTests gmock gmock_main)