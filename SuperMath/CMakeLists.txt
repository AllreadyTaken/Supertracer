set(SuperMath_SRCS
SuperMath.h
SuperMath.cpp
)

# Declare the library
add_library(SuperMath STATIC
    ${SuperMath_SRCS}
)


# Specify here the include directories exported
# by this library
target_include_directories(SuperMath PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)
