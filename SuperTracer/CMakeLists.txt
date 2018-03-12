set(Main_SRCS
    SuperTracer.cpp
)

add_executable(SuperTracer
    ${Main_SRCS}
)

# Specify here the libraries this program depends on
target_link_libraries(SuperTracer
    PixelToaster
    SuperMath
)

install(TARGETS SuperTracer DESTINATION bin)