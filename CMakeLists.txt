cmake_minimum_required (VERSION 3.14)
set(CXX_STANDARD 20)

project ("MinimalTestProject")

# Include Subdirectory containing sources
add_subdirectory(src)

# Include subdirectory containing unit tests
enable_testing()
add_subdirectory(test)