#include "lib.h"

#include <iostream>

int main (int, char **) {
    std::cout << "Version: " << version() << std::endl;
    std::cout << "Hello, world!" << std::endl;
    int a = 0;
    std::cout << a;
    return 0;
}
