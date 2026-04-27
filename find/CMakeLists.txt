add_executable(binary_search
        binary_search/binary_search.c
)

target_link_libraries(binary_search PRIVATE
        common
)