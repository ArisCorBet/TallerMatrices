#include <stdio.h>

int main() {
    int filas, columnas;

    // Pedir al usuario el número de filas y columnas
    printf("Ingrese el numero de filas: ");
    scanf("%d", &filas);
    printf("Ingrese el numero de columnas: ");
    scanf("%d", &columnas);

    int matriz[filas][columnas];

    // Pedir al usuario que ingrese los elementos de la matriz
    printf("Ingrese los elementos de la matriz:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Mostrar la matriz ingresada
    printf("La matriz ingresada es:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Mostrar el número de filas y columnas
    printf("Numero de filas: %d\n", filas);
    printf("Numero de columnas: %d\n", columnas);

    return 0;
}
