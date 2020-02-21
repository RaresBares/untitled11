#include <iostream>
#include <thread>
#include "target.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::thread thread{target{}};

    return 0;
}
