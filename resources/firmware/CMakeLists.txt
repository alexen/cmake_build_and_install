set(RESOURCE_FILES
     device-a01.img
     device-b09.img
     device-z11.img
)

add_custom_target(
     firmware ALL
     WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
     COMMENT "Copy resources to output directory"
     COMMAND ${CMAKE_COMMAND} -E make_directory ${PROJECT_RESOURCE_OUTPUT_DIR}
     COMMAND ${CMAKE_COMMAND} -E copy_if_different ${RESOURCE_FILES} ${PROJECT_RESOURCE_OUTPUT_DIR}
)

install(
     FILES ${RESOURCE_FILES}
     DESTINATION ${PROJECT_RESOURCE_SUBDIR}
)