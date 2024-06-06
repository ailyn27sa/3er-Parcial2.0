#include <iostream>
#include <cmath>

double potencia(double base, double exponente) {
    return pow(base, exponente);
}

int main() {
    double base, exponente, resultado;
    std::cout << "Ingrese el numero: ";
    std::cin >> base;
    std::cout << "Ingrese el exponente: ";
    std::cin >> exponente;
    resultado = potencia(base, exponente);
    std::cout << base << " elevado a la " << exponente << " es " << resultado << std::endl;
    return 0;
}