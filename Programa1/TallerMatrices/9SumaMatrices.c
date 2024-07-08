#include <stdio.h>

int main() {
    int num;

    printf("=============Matriz Cuadrada============== \n");

    // Pedir al usuario el número de filas y columnas
    printf("Ingrese el numero de filas y columnas: \n");
    scanf("%d", &num);
    

    int matriz1[num][num], matriz2[num][num], matrizsum[num][num];

    // Pedir al usuario que ingrese los elementos de la primera matriz
    printf("Ingrese los elementos de la primera matriz:\n");
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    // Pedir al usuario que ingrese los elementos de la segunda matriz
    printf("Ingrese los elementos de la segunda matriz:\n");
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }

    // Sumar las dos matrices
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            matrizsum[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    // Mostrar la matriz resultante
    printf("La suma es:\n");
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            printf("%d ", matrizsum[i] [j]);
        }
        printf("\n");
    }

    return 0;
}

