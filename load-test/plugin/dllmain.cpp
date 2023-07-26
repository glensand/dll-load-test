#include "pch.h"
#include <iostream>

struct initializer final {
    initializer() {
        std::cout << "Initialized\n";
    }

    ~initializer() {
        std::cout << "Deinitialized\n";
    }
};

static initializer s;