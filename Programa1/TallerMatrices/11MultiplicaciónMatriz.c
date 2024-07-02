#include <stdio.h>

int main() {
    int fila1, columna1, fila2, columna2;

    // Pedir al usuario las dimensiones de la primera matriz
    printf("Ingrese el numero de filas de la primera matriz: ");
    scanf("%d", &fila1);
    printf("Ingrese el numero de columnas de la primera matriz: ");
    scanf("%d", &columna1);

    // Pedir al usuario las dimensiones de la segunda matriz
    printf("Ingrese el numero de filas de la segunda matriz: ");
    scanf("%d", &fila2);
    printf("Ingrese el numero de columnas de la segunda matriz: ");
    scanf("%d", &columna2);

    // Verificar si la multiplicación de matrices es posible
    if (fila1 != columna2) {
        printf("La multiplicacion de matrices no es posible con las dimensiones dadas.\n");
        return 1;
    }

    int mat1[fila1][columna1], mat2[fila2][columna2], product[fila1][columna2];

    // Pedir al usuario que ingrese los elementos de la primera matriz
    printf("Ingrese los elementos de la primera matriz:\n");
    for (int i = 0; i < fila1; i++) {
        for (int j = 0; j < columna1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    // Pedir al usuario que ingrese los elementos de la segunda matriz
    printf("Ingrese los elementos de la segunda matriz:\n");
    for (int i = 0; i < fila2; i++) {
        for (int j = 0; j < columna2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    // Inicializar la matriz producto a cero
    for (int i = 0; i < fila1; i++) {
        for (int j = 0; j < columna2; j++) {
            product[i][j] = 0;
        }
    }

    // Multiplicar las matrices
    for (int i = 0; i < fila1; i++) {
        for (int j = 0; j < columna2; j++) {
            for (int k = 0; k < fila1; k++) {
                product[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    // Mostrar la matriz resultante
    printf("La matriz resultante de la multiplicacion es:\n");
    for (int i = 0; i < fila1; i++) {
        for (int j = 0; j < columna2; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}
