
file(GLOB SRCS *.cpp)

ADD_EXECUTABLE(SuperTest ${SRCS})

TARGET_LINK_LIBRARIES(SuperTest
    SuperMath
    libgtest
    libgmock
)

add_test(NAME SuperTest
         COMMAND SuperTest)