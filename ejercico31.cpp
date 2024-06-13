#include <stdio.h>
#include <string.h>

float calcularImporte(int cantidad, float precioUnitario) {
    return cantidad * precioUnitario;
}

int main() {
    char nombre[50];
    char contrasena[50];
    int intentos = 3;
    float importeTotal = 0;

    do {
        printf("Introduce tu nombre: ");
        scanf("%s", nombre);

        printf("Introduce tu contrasena: ");
        scanf("%s", contrasena);

        if (strcmp(nombre, "Ailyn") == 0 && strcmp(contrasena, "2B42") == 0) {
            printf("Bienvenido, %s!\n", nombre);
            break;
        } else {
            printf("Acceso denegado. Intentos restantes: %d\n\n", --intentos);
        }
    } while (intentos > 0);

    printf("\nAhora vamos a calcular el importe de la factura.\n");
    printf("Por favor introduzca la cantidad y el precio unitario de cada artículo.\n");
    printf("Cuando hayas terminado, introduce 0 en la cantidad para finalizar.\n\n");

    int cantidad;
    float precioUnitario;

    printf("Cantidad: ");
    scanf("%d", &cantidad);

    while (cantidad != 0) {
        printf("Precio unitario: ");
        scanf("%f", &precioUnitario);

        if (cantidad < 0 || precioUnitario < 0) {
            printf("Error: la cantidad y el precio deben ser números positivos.\n\n");
        } else {
            float importar = calcularImporte(cantidad, precioUnitario);
            importeTotal += importar;
        }

        printf("\nCantidad: ");
        scanf("%d", &cantidad);
    }
    
    printf("\nImporte total de la factura: %.2f\n", importeTotal);
    
    return 0;
}