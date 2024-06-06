#include <iostream>

float atri(float b, float a) {
    return (b * a) / 2;
}

float atra(float bm, float bmr, float altura) {
    return ((bm + bmr) * altura) / 2;
}

float ar(float base, float altura) {
    return base * altura;
}

int main() {
    int opcion;
    float base, altura, bme, bm;

    std::cout << "Menu de calculo de areas\n";
    std::cout << "1. Calcular el area de un triangulo\n";
    std::cout << "2. Calcular el area de un trapecio\n";
    std::cout << "3. Calcular el area de un rectangulo\n";
    std::cout << "Seleccione una opcion: ";
    std::cin >> opcion;

    switch (opcion) {
        case 1:
            std::cout << "Ingrese la base del triangulo: ";
            std::cin >> base;
            std::cout << "Ingrese la altura del triangulo: ";
            std::cin >> altura;
            std::cout << "El area del triangulo es: " << atri(base, altura) << std::endl;
            break;
        case 2:
            std::cout << "Ingrese la base mayor del trapecio: ";
            std::cin >> bm;
            std::cout << "Ingrese la base menor del trapecio: ";
            std::cin >> bme;
            std::cout << "Ingrese la altura del trapecio: ";
            std::cin >> altura;
            std::cout << "El area del trapecio es: " << atra(bm, bme, altura) << std::endl;
            break;
        case 3:
            std::cout << "Ingrese la base del rectangulo: ";
            std::cin >> base;
            std::cout << "Ingrese la altura del rectangulo: ";
            std::cin >> altura;
            std::cout << "El area del rectangulo es: " << ar(base, altura) << std::endl;
            break;
        default:
            std::cout << "Opcion no valida." << std::endl;
            break;
    }

    return 0;
}