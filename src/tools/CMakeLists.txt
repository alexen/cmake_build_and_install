set(LIBRARY_NAME tools)

add_library(${LIBRARY_NAME} greeting.cpp)

install(TARGETS ${LIBRARY_NAME})