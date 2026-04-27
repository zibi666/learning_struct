add_executable(bubble_sort
        bubble_sort/bubble_sort.c
)

target_link_libraries(bubble_sort PRIVATE
        common
)

add_executable(insertion_sort
        insertion_sort/insertion_sort.c
)

target_link_libraries(insertion_sort PRIVATE
        common
)