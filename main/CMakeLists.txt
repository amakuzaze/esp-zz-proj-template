idf_component_register(
SRCS
    "main.cpp"
INCLUDE_DIRS
    "."
)

component_compile_options(
    -std=gnu++17
    -Wsuggest-override
)
