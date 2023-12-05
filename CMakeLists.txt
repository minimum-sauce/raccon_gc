cmake_minimum_required(VERSION 3.22)
project(racoonGC
    VERSION 0.1
    DESCRIPTION "A garbage collector for C"
    LANGUAGES C CXX
)

# For clang-tidy, since it needs a compilation database.
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

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

# -----------------------------------------------------
#   Targets
# -----------------------------------------------------

# Test
add_executable(GC_test)

add_subdirectory(test)
add_subdirectory(src) 

# -----------------------------------------------------
#   Linker and compiler options
# -----------------------------------------------------

target_link_libraries(GC_test
    GTest::GTest GTest::Main
)

target_compile_options(GC_test PRIVATE
    $<$<OR:$<CXX_COMPILER_ID:Clang>,$<CXX_COMPILER_ID:AppleClang>,$<CXX_COMPILER_ID:GNU>>: -Wall -Wextra -Wconversion> 
)

target_include_directories(GC_test PRIVATE
    ${PROJECT_SOURCE_DIR}/src/template/include
)

gtest_discover_tests(GC_test)