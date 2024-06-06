#include <iostream>

int main() {
    int numero, suma = 0, contador = 0;
    
    do {
        std::cout << "Introduce un número (0 para finalizar): ";
        std::cin >> numero;
        
        if (numero != 0) {
            std::cout << "Has introducido el número " << numero << "." << std::endl;
            suma += numero;
            contador++;
        }
    } while (numero != 0);
    
    std::cout << "Finalizando: Se ha introducido el número 0." << std::endl;
    std::cout << "Cantidad de números introducidos: " << contador << std::endl;
    std::cout << "Suma de los números introducidos: " << suma << std::endl;
    
    return 0;
}