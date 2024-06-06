#include <iostream>

int main() {
    char caracter;
    
    std::cout << "Introduce un caracter: ";
    std::cin >> caracter;
    
    switch(caracter) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            std::cout << caracter << " es una vocal." << std::endl;
            break;
        default:
            std::cout << caracter << " no es una vocal." << std::endl;
    }
    
    return 0;
}