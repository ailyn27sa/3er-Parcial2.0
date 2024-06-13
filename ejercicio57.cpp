//equipo 6
#include <iostream>
#include <string>

using namespace std;

// Estructura para almacenar los datos de un usuario
struct Usuario {
  int id;
  string nombre;
  string contrasena;
  string tipoUsuario;
};

// valentin Función para mostrar el menú principal
void mostrarMenu() {
  cout << "\n\nMENU PRINCIPAL\n";
  cout << "1. Crear usuario\n";
  cout << "2. Leer usuario\n";
  cout << "3. Actualizar usuario\n";
  cout << "4. Eliminar usuario\n";
  cout << "5. Salir\n";
  cout << "Ingrese su opción: ";
}

// Ailyn Función para crear un usuario
void crearUsuario(Usuario usuarios[], int& numeroUsuarios) {
  cout << "\nCREAR USUARIO\n";

  // VALENTIN Obtener los datos del usuario
  cout << "Ingrese el ID: ";
  cin >> usuarios[numeroUsuarios].id;
  cout << "Ingrese el nombre: ";
  cin.ignore();
  getline(cin, usuarios[numeroUsuarios].nombre);
  cout << "Ingrese la contraseña: ";
  getline(cin, usuarios[numeroUsuarios].contrasena);
  cout << "Ingrese el tipo de usuario: ";
  getline(cin, usuarios[numeroUsuarios].tipoUsuario);

  // Incrementar el contador de usuarios
  numeroUsuarios++;

  cout << "\nUsuario creado exitosamente!\n";
}

// DANNA PAOLA Función para leer un usuario
void leerUsuario(Usuario usuarios[], int numeroUsuarios) {
  cout << "\nLEER USUARIO\n";

  if (numeroUsuarios == 0) {
    cout << "No hay usuarios registrados.\n";
    return;
  }

  // DANNA PAOLA Mostrar la lista de usuarios
  for (int i = 0; i < numeroUsuarios; i++) {
    cout << "\nUsuario " << i + 1 << ":\n";
    cout << "ID: " << usuarios[i].id << endl;
    cout << "Nombre: " << usuarios[i].nombre << endl;
    cout << "Contraseña: " << usuarios[i].contrasena << endl;
    cout << "Tipo de usuario: " << usuarios[i].tipoUsuario << endl;
  }
}

//katherine Función para actualizar un usuario
void actualizarUsuario(Usuario usuarios[], int numeroUsuarios) {
  cout << "\nACTUALIZAR USUARIO\n";

  if (numeroUsuarios == 0) {
    cout << "No hay usuarios registrados.\n";
    return;
  }

  // Mostrar la lista de usuarios
  for (int i = 0; i < numeroUsuarios; i++) {
    cout << "\nUsuario " << i + 1 << ":\n";
    cout << "ID: " << usuarios[i].id << endl;
    cout << "Nombre: " << usuarios[i].nombre << endl;
    cout << "Contraseña: " << usuarios[i].contrasena << endl;
    cout << "Tipo de usuario: " << usuarios[i].tipoUsuario << endl;
  }

  // Obtener el ID del usuario a actualizar
  //nathaly cuamatzi 
  int idUsuarioActualizar;
  cout << "\nIngrese el ID del usuario a actualizar: ";
  cin >> idUsuarioActualizar;

  // Buscar el usuario en la matriz
  bool encontrado = false;
  for (int i = 0; i < numeroUsuarios; i++) {
    if (usuarios[i].id == idUsuarioActualizar) {
      encontrado = true;

      // Obtener los nuevos datos del usuario
      cout << "\nIngrese los nuevos datos del usuario:\n";
      cout << "Nombre: ";
      cin.ignore();
      getline(cin, usuarios[i].nombre);
      cout << "Contraseña: ";
      getline(cin, usuarios[i].contrasena);
      cout << "Tipo de usuario: ";
      getline(cin, usuarios[i].tipoUsuario);

      cout << "\nUsuario actualizado exitosamente!\n";
      break;
    }
  }

  if (!encontrado) {
    cout << "\nUsuario con ID " << idUsuarioActualizar << " no encontrado.\n";
  }
}

// katherine Función para eliminar un usuario
void eliminarUsuario(Usuario usuarios[], int& numeroUsuarios) {
  cout << "\nELIMINAR USUARIO\n";

  if (numeroUsuarios == 0) {
    cout << "No hay usuarios registrados.\n";
    return;
  }

  // Tu implementación para eliminar un usuario
  //nathaly cuamatzi 
}

int main() {
  const int MAX_USUARIOS = 100;
  Usuario usuarios[MAX_USUARIOS];
  int numeroUsuarios = 0;
  int opcion;

  do {
    mostrarMenu();
    cin >> opcion;

    switch (opcion) {
      case 1:
        crearUsuario(usuarios, numeroUsuarios);
        break;
      case 2:
        leerUsuario(usuarios, numeroUsuarios);
        break;
      case 3:
        actualizarUsuario(usuarios, numeroUsuarios);
        break;
      case 4:
        eliminarUsuario(usuarios, numeroUsuarios);
        break;
      case 5:
        cout << "Saliendo del programa...\n";
        break;
      default:
        cout << "Opción no válida. Por favor, intente de nuevo.\n";
        break;
    }
  } while (opcion != 5);

  return 0;
}