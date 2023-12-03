# Getting gtest
include(FetchContent)
FetchContent_Declare(googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG f8d7d77c06936315286eb55f8de22cd23c188571 # release-1.14
)

FetchContent_MakeAvailable(googletest)
find_package(GTest REQUIRED)
include(GoogleTest)
enable_testing() 

# Source files for the target
target_sources(GC_test PRIVATE 
    template/template_test.cpp
)
