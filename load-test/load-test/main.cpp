#include <iostream>

#include "Windows.h"

int main() {
    std::cout << "First load:\n";
    auto lib = LoadLibraryA("plugin.dll");
    std::cout << "First free:\n";
    FreeLibrary(lib);

    std::cout << "Second load\n";
    lib = LoadLibraryA("plugin.dll");
    std::cout << "Second free\n";
    FreeLibrary(lib);

    return 0;
}
