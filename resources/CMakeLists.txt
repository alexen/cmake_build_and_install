set(RESOURCE_FILES
     firmware.img
     firmware.img.sha512
)

add_custom_target(
     firmware ALL
     WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
     COMMENT "Copy resources to output directory"
     COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_RESOURCE_OUTPUT_DIRECTORY}
     COMMAND ${CMAKE_COMMAND} -E copy_if_different ${RESOURCE_FILES} ${CMAKE_RESOURCE_OUTPUT_DIRECTORY}
)

install(FILES firmware.img DESTINATION resources)