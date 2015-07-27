add_library(libsel4string STATIC
    src/sel4_strlen.c
    src/sel4_strncmp.c
)

target_compile_definitions(libsel4string
    PUBLIC HAVE_SEL4_STRING
)

target_include_directories(libsel4string SYSTEM
    PUBLIC "include"
)

target_link_libraries(libsel4string
    libsel4
    libsel4assert)
