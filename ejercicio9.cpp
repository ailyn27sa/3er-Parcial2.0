#include <iostream>

int main() {
    int cantidad;
    
    std::cout << "Ingrese la cantidad de términos a mostrar: ";
    std::cin >> cantidad;
    
    std::cout << "La serie es: ";
    for (int i = 1; i <= cantidad; i++) {
        std::cout << i * 5 << " ";
    }
    std::cout << std::endl;
    
    return 0;
}