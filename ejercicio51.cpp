#include <iostream>
#include <cstring>

using namespace std;


struct Venta {
    float precioUnitario;
    int cantidad;
};

const int MAX_VENTAS = 100; 
const int MAX_CLIENTES = 10; 

int main() {
    char nombre[20];
    char grupoLista[20];
    int intentos = 0;

    char nombresClientes[MAX_CLIENTES][20]; 
    Venta ventasPorCliente[MAX_CLIENTES][MAX_VENTAS]; 
    float importesTotales[MAX_CLIENTES] = {0}; 

    do {
        cout << "Dime tu nombre: ";
        cin >> nombre;
        cout << "Dime tu grupo grado y numero de lista: ";
        cin >> grupoLista;
        if (strcmp(nombre, "Ailyn") == 0 && strcmp(grupoLista, "2B42") == 0) {
            cout << "Bienvenido al sistema" << endl;
            break;
        } else {
            intentos++;
            cout << "Datos incorrectos. Intentos restantes: " << 3 - intentos << endl;
        }
    } while (intentos < 3);

    if (intentos == 3) {
        cout << "Lo sentimos, has superado el número máximo de intentos permitidos" << endl;
        return 1; 
    }

    char opcion;
    do {
        int numVenta = 0;

        while (true) {
            float precioUnitario;
            int cantidad;
            
            cout << "Venta " << numVenta + 1 << ":" << endl;
            cout << "Introduzca el precio unitario del artículo. Si desea terminar, ingrese 0: ";
            cin >> precioUnitario;

            if (precioUnitario < 0) {
                cout << "El precio unitario debe ser un número positivo." << endl;
                continue;
            } else if (precioUnitario == 0) {
                break; 
            }

            cout << "Introduzca la cantidad vendida: ";
            cin >> cantidad;

            if (cantidad <= 0) {
                cout << "Error, la cantidad vendida debe ser un número positivo." << endl;
                continue;
            }

            
            ventasPorCliente[0][numVenta].precioUnitario = precioUnitario;
            ventasPorCliente[0][numVenta].cantidad = cantidad;
            importesTotales[0] += precioUnitario * cantidad;

            cout << "Importe parcial de esta venta: " << precioUnitario * cantidad << endl;
            numVenta++;
        }

        
        cout << "Total de ventas para el cliente " << nombre << ":" << endl;
        for (int i = 0; i < numVenta; ++i) {
            cout << "Venta " << i + 1 << ": " << ventasPorCliente[0][i].precioUnitario * ventasPorCliente[0][i].cantidad << endl;
        }

        cout << "Total de ventas individuales: " << importesTotales[0] << endl;

        cout << "¿Desea realizar otra venta? (S/N): ";
        cin >> opcion;
    } while (opcion == 'S' || opcion == 's');


    float totalGeneral = 0;
    for (int i = 0; i < MAX_CLIENTES; ++i) {
        totalGeneral += importesTotales[i];
    }
    cout << "Total general de la tienda: " << totalGeneral << endl;

    return 0;
}