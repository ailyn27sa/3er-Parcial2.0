#include <iostream>
#include <string>

using namespace std;

// Definición de la estructura Empleado
struct Empleado {
    string nombre;
    int edad;
    float salario;
};

// Función para mostrar un empleado
void mostrarEmpleado(const Empleado& empleado) {
    cout << "Nombre: " << empleado.nombre << endl;
    cout << "Edad: " << empleado.edad << endl;
    cout << "Salario: $" << empleado.salario << endl;
    cout << "--------------------------" << endl;
}

// Función para crear un nuevo empleado
Empleado crearEmpleado() {
    Empleado nuevoEmpleado;
    cout << "Ingrese el nombre del empleado: ";
    cin >> nuevoEmpleado.nombre;
    cout << "Ingrese la edad del empleado: ";
    cin >> nuevoEmpleado.edad;
    cout << "Ingrese el salario del empleado: ";
    cin >> nuevoEmpleado.salario;
    return nuevoEmpleado;
}

int main() {
    Empleado empleado;

    while (true) {
        cout << "\nMenu:" << endl;
        cout << "1. Agregar empleado" << endl;
        cout << "2. Mostrar empleado" << endl;
        cout << "3. Actualizar empleado" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opcion: ";

        int opcion;
        cin >> opcion;

        switch (opcion) {
            case 1:
                empleado = crearEmpleado();
                cout << "Empleado agregado correctamente." << endl;
                break;
            case 2:
                if (empleado.nombre.empty()) {
                    cout << "No hay empleado para mostrar." << endl;
                } else {
                    mostrarEmpleado(empleado);
                }
                break;
            case 3:
                if (empleado.nombre.empty()) {
                    cout << "No hay empleado para actualizar." << endl;
                } else {
                    cout << "Ingrese la nueva edad del empleado: ";
                    cin >> empleado.edad;
                    cout << "Ingrese el nuevo salario del empleado: ";
                    cin >> empleado.salario;
                    cout << "Empleado actualizado correctamente." << endl;
                }
                break;
            case 4:
                cout << "Saliendo del programa." << endl;
                return 0;
            default:
                cout << "Opcion invalida. Intente de nuevo." << endl;
        }
    }

    return 0;
}
