#include <iostream>
#include <string>

int main() {
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
                break;
            }
        }
    } while (intentos > 0);

    return 0;
}