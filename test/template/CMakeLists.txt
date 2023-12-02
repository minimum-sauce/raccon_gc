
# generate test executable
add_executable(template_test 
    template_test.cpp)
# This creates a new executable that can be built by cmake
#target_compile_features(template_test PRIVATE cxx_std_17)

# We link the executable to the external CUnit library
target_link_libraries(
    template_test 
    template 
    GTest::gtest_main
    )

include(GoogleTest)
# add test to be runn by ctest
gtest_discover_tests(template_test)
