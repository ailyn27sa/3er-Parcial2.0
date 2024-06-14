#include <iostream>
using namespace std;

int main() {
    int p;
    int contPositivos = 0;
    int contNegativos = 0;

    cout << "Digite el numero de posiciones (tamaño): ";
    cin >> p;

    int num[p];

    for (int i = 0; i < p; i++) {
        cout << "Digite el numero " << i + 1 << ": ";
        cin >> num[i];
    }

    for (int i = 0; i < p; i++) {
        if (num[i] > 0) {
            contPositivos++;
            cout << "El numero en la posicion " << i + 1 << " es positivo." << endl;
        } else if (num[i] < 0) {
            contNegativos++;
            cout << "El numero en la posicion " << i + 1 << " es negativo." << endl;
        }
    }

    cout << "Total de numeros positivos: " << contPositivos << endl;
    cout << "Total de numeros negativos: " << contNegativos << endl;

    return 0;
}