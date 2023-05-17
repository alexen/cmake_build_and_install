add_subdirectory(tools)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} tools)

install(TARGETS ${PROJECT_NAME})