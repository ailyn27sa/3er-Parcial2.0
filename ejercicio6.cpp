#include <iostream>

int main() {
    int numero;

    std::cout << "Ingrese un numero: ";
    std::cin >> numero;

    switch(numero) {
        case 1:
            std::cout << "Az\n";
            break;
        case 10:
            std::cout << "Sota\n";
            break;
        case 11:
            std::cout << "Caballo\n";
            break;
        case 12:
            std::cout << "Rey\n";
            break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            std::cout << "No es ninguna figura\n";
            break;
        default:
            std::cout << "Este no es un numero de una baraja española\n";
    }

    return 0;
}