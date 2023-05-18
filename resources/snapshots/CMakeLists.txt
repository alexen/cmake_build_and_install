set(RESOURCE_FILES
     snapshot001.map
     snapshot002.map
)

add_custom_target(
     snapshots ALL
     COMMENT "Copy snapshots to output directory"
     WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
     COMMAND ${CMAKE_COMMAND} -E make_directory ${PROJECT_RESOURCE_OUTPUT_DIR}
     COMMAND ${CMAKE_COMMAND} -E copy_if_different ${RESOURCE_FILES} ${PROJECT_RESOURCE_OUTPUT_DIR}
)

install(
     FILES ${RESOURCE_FILES}
     DESTINATION ${PROJECT_RESOURCE_SUBDIR}
)
