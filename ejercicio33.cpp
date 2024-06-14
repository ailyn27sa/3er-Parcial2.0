#include <iostream>
using namespace std;

int main() {
    int num[5];
    int numero;

    for (int i = 0; i < 5; i++) {
        cout << "Digite el número para la posición " << i + 1 << ": ";
        cin >> numero;
        num[i] = numero;
    }

    cout << "Los datos en forma de lista son:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Posición " << i + 1 << ": " << num[i] << endl;
    }

    return 0;
}