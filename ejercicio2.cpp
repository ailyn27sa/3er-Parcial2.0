#include <iostream>

using namespace std;

int main() {
    
    int numeros[5]; 
    int menor, mayor;
    bool hayRepetidos = false;

  
    cout << "Ingrese 5 números: " << endl;
    for (int i = 0; i < 5; i++) {
        cin >> numeros[i];
    }

 
    menor = mayor = numeros[0];
    for (int i = 1; i < 5; i++) {
        if (numeros[i] < menor) {
            menor = numeros[i];
        } else if (numeros[i] > mayor) {
            mayor = numeros[i];
        }
    }

   
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (numeros[i] == numeros[j]) {
                hayRepetidos = true;
                cout << "Número repetido: " << numeros[i] << endl;
                break;
            }
        }
    }


    cout << "El número menor es: " << menor << endl;
    cout << "El número mayor es: " << mayor << endl;

    if (hayRepetidos) {
        cout << "Hay números repetidos." << endl;
    } else {
        cout << "No hay números repetidos." << endl;
    }

    return 0;
}