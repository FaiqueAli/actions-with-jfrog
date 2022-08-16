add_executable(calcTest calcTest.cpp)

target_link_libraries(calcTest PRIVATE calcLib  GTest::gtest_main)

gtest_discover_tests(calcTest)