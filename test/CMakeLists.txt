# The following uses CMake FetchContent to download ggogletest from git and make it available for cmake
include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        v1.14.0 
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_executable(MinimalLibraryTest
    ExampleTest.cpp
)

target_link_libraries(MinimalLibraryTest PRIVATE
  MinimalLibrary
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(MinimalLibraryTest)
