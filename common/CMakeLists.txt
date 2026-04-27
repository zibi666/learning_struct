add_library(common
        array_utils.c
        array_utils.h
)

target_include_directories(common PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)