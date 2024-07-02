#include <stdio.h>

int main() {
    int filas, columnas;

    // Pedir al usuario el número de filas y columnas
    printf("Ingrese el numero de filas: ");
    scanf("%d", &filas);
    printf("Ingrese el numero de columnas: ");
    scanf("%d", &columnas);

    int matriz1[filas][columnas], matriz2[filas][columnas], matrizsum[filas][columnas];

    // Pedir al usuario que ingrese los elementos de la primera matriz
    printf("Ingrese los elementos de la primera matriz:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    // Pedir al usuario que ingrese los elementos de la segunda matriz
    printf("Ingrese los elementos de la segunda matriz:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }

    // Sumar las dos matrices
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matrizsum[i][j] = matriz1[i][j] - matriz2[i][j];
        }
    }

    // Mostrar la matriz resultante
    printf("La resta es:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d ", matrizsum[i] [j]);
        }
        printf("\n");
    }

    return 0;
}
