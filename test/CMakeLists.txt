add_executable(text main.cpp)

target_include_directories(text
PRIVATE
)

set_target_properties(text PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${OUTPUT_DIR}
    PDB_OUTPUT_DIRECTORY ${INT_DIR} 
)

target_link_libraries(text
    PRIVATE
        vvmidi
)
