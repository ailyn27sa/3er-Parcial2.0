#include <stdio.h>

float calcularMax(float x, float y);
float calcularNota(float p1, float p2, float e);

int main(void)
{
    char c;
    do
    {
        float parcial1, parcial2, examen, final;

        // Leer valores
        printf("Introduzca nota parcial 1 [0, 10]: ");
        scanf("%f", &parcial1);
        printf("Introduzca nota parcial 2 [0, 10]: ");
        scanf("%f", &parcial2);
        printf("Introduzca nota examen final [0, 10]: ");
        scanf("%f", &examen);

        // Calcular nota final
        final = calcularNota(parcial1, parcial2, examen);

        // Imprimir resultados
        printf("Nota final: %f\n", final);

        // Continuar?
        printf("\n¿Salir? (s/n): ");
        // Para evitar conflictos con el salto de línea (\n) y 
        // evitar un bucle infinito se recurre al siguiente "truco"
        do
        {
            scanf("%c", &c);
        } while (c == '\n');
        printf("\n");
    } while (c != 's');

    return 0;
}

float calcularNota(float p1, float p2, float notaExamen) {
    /* Función calcularNota: Calcula la nota final a partir de:
       - primer parcial 20% (p1)
       - segundo parcial 20% (p2)
       - examen final 60% (notaExamen)
       Si la nota final con la evaluación continua es menor a la del examen, la nota final es la del examen.
    */
    float notaFinal = 0.2 * p1 + 0.2 * p2 + 0.6 * notaExamen;
    if (notaFinal < notaExamen) {
        return notaExamen;
    }
    return notaFinal;
}
