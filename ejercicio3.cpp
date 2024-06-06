#include <iostream>

using namespace std;

int main() {
    int num1, num2, num3;

    // Solicitar al usuario que ingrese los tres números
    cout << "Ingresa el primer numero: ";
    cin >> num1;
    cout << "Ingresa el segundo numero: ";
    cin >> num2;
    cout << "Ingresa el tercer numero: ";
    cin >> num3;

    // Ordenar los números
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num2 > num3) {
        int temp = num2;
        num2 = num3;
        num3 = temp;
    }
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    // Mostrar los números ordenados
    cout << "Los numeros ordenados de menor a mayor son: " << num1 << ", " << num2 << ", " << num3 << endl;

    return 0;
}