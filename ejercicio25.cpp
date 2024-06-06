#include <iostream>

int main() {
    int numeros[10];
    int mayor, menor, sumaTotal;
    std::cout << "Ingrese 10 numeros:" << std::endl;
    for (int i = 0; i < 10; ++i) {
        std::cout << "Numero " << i + 1 << ": ";
        std::cin >> numeros[i];
    }

   
    mayor = menor = numeros[0];
    sumaTotal = numeros[0];
    for (int i = 1; i < 10; ++i) {
        if (numeros[i] > mayor) {
            mayor = numeros[i];
        }
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
        sumaTotal += numeros[i];
    }
    std::cout << "El mayor numero ingresado es: " << mayor << std::endl;
    std::cout << "El menor numero ingresado es: " << menor << std::endl;
    std::cout << "La suma total de los numeros ingresados es: " << sumaTotal << std::endl;

    return 0;
}