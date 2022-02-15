#include <cstdio>

extern "C" {
auto app_main() -> void;
}

auto app_main() -> void {
    std::printf("Hello world!\n");
}
