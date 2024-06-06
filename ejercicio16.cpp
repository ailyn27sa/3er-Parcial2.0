#include <iostream>

int main() {
    int numeros[5];
    
    
    std::cout << "Ingrese 5 numeros:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << "Numero " << i + 1 << ": ";
        std::cin >> numeros[i];
    }
    
    
    int menor = numeros[0];
    for (int i = 1; i < 5; ++i) {
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }
    
    
    std::cout << "El menor numero ingresado es: " << menor << std::endl;
    
    return 0;
}