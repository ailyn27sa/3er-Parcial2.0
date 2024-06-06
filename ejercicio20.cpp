#include <iostream>

int main() {
    int i = 1;
    
    do {
        std::cout << i << std::endl;
        ++i;
    } while (i <= 100);
    
    return 0;
}