add_library(MinimalLibrary STATIC
    Example.cpp
)

target_include_directories(MinimalLibrary PUBLIC .)
