#include <iostream>

int main() {
    int i = 100;

    do {
        std::cout << i << std::endl;
        --i;
    } while (i >= 1);

    return 0;
}