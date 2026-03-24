add_library(vvmidi SHARED)

set_target_properties(vvmidi PROPERTIES 
    PREFIX ""
    OUTPUT_NAME "vvmidi"
    RUNTIME_OUTPUT_DIRECTORY ${OUTPUT_DIR}
    PDB_OUTPUT_DIRECTORY ${INT_DIR}
)

target_include_directories(vvmidi
PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)

target_sources(vvmidi
PRIVATE
    "src/midiOut.cpp"
    "src/msg.cpp"
)

target_link_libraries(vvmidi
PUBLIC
    winmm
)

