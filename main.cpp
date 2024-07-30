#include "lib.h"

#include <iostream>

int main (int, char **) {
    std::cout << "Version: " << version() << std::endl;
    std::cout << "Hello, world!" << std::endl;
    std::cout << "How are you?" << std::endl;
    int a = 123;
    std::cout << a;
    return 0;
}
