set(PixelToaster_SRCS
PixelToasterWindows.h
PixelToasterUnix.h
PixelToasterConversion.h
PixelToasterCommon.h
PixelToasterApple.h
PixelToaster.h
PixelToaster.cpp
)

# Declare the library
add_library(PixelToaster STATIC
    ${PixelToaster_SRCS}
)


# Specify here the include directories exported
# by this library
target_include_directories(PixelToaster PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)
