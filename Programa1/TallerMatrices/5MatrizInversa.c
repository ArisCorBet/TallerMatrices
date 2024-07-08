#include <stdio.h>

// Función para imprimir una matriz
void imprimirMatriz(float matriz[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%0.2f ", matriz[i][j]);
        }
        printf("\n");
    }
}

// Función para encontrar la inversa de una matriz
void invertirMatriz(float matriz[3][3], float inversa[3][3]) {
    // Inicializamos la matriz inversa como la matriz identidad
    // Si estamos en una posicion diagonal se imprime un 1 y si no se imprime un 0
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j) {
                inversa[i][j] = 1;
            } else {
                inversa[i][j] = 0;
            }
        }
    }

    // Aplicamos el método de Gauss-Jordan
    for (int i = 0; i < 3; i++) {
        float temp = matriz[i][i];
        
        // Normalizamos la fila actual
        for (int j = 0; j < 3; j++) {
            matriz[i][j] /= temp;
            inversa[i][j] /= temp;
        }

        // Eliminamos los elementos no deseados en las otras filas
        for (int k = 0; k < 3; k++) {
            if (k != i) {
                temp = matriz[k][i];
                for (int j = 0; j < 3; j++) {
                    matriz[k][j] -= matriz[i][j] * temp;
                    inversa[k][j] -= inversa[i][j] * temp;
                }
            }
        }
    }
}

int main() {
    // Declaramos la matriz original y la matriz inversa
    float matriz[3][3] = {
        {2, -1, 0},
        {-1, 2, -1},
        {0, -1, 2}
    };
    float inversa[3][3];

    // Imprimimos la matriz original
    printf("Matriz original:\n");
    imprimirMatriz(matriz);

    // Calculamos la inversa
    invertirMatriz(matriz, inversa);

    // Imprimimos la matriz inversa
    printf("\nMatriz inversa:\n");
    imprimirMatriz(inversa);

    return 0;
}
