#include <iostream>
#include <string>

int main() {
    int cantidad;
    float precioUnitario;
    float importeTotal = 0;
    std::string nombre;
    std::string contrasena;
    int intentos = 3;

    do {
        std::cout << "Introduce tu nombre: ";
        std::cin >> nombre;

        std::cout << "Introduce tu contraseña: ";
        std::cin >> contrasena;

        if (nombre == "Ailyn" && contrasena == "2B42") {
            std::cout << "Bienvenido al sistema.\n";
            break;
        } else {
            intentos--;
            if (intentos > 0) {
                std::cout << "Nombre de usuario o contraseña incorrectos. Te quedan " << intentos << " intentos.\n";
            } else {
                std::cout << "Se ha superado el número de intentos permitido.\n";
                return 1; 
            }
        }
    } while (intentos > 0);

    std::cout << "Bienvenido al sistema de facturación.\n";
    std::cout << "Por favor introduce la cantidad y el precio unitario de cada artículo.\n";
    std::cout << "Cuando hayas terminado, introduce 0 en la cantidad para finalizar.\n\n";

    do {
        std::cout << "Cantidad: ";
        std::cin >> cantidad;
        if (cantidad == 0) {
            break;
        }

        std::cout << "Precio unitario: ";
        std::cin >> precioUnitario;

        if (cantidad < 0 || precioUnitario < 0) {
            std::cout << "Error: la cantidad y el precio deben ser números positivos.\n\n";
            continue;
        }

        float importe = cantidad * precioUnitario;
        importeTotal += importe;

    } while (cantidad != 0);

    std::cout << "\nImporte total de la factura: " << importeTotal << "\n";

    return 0;
}