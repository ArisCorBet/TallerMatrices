#include <stdio.h>


void multiplicarMatrices(int primeraMatriz[3][3], int segundaMatriz[3][3], int resultado[3][3]) {
    // Función para multiplicar dos matrices
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            resultado[i][j] = 0; // Inicializamos el elemento en la matriz de resultado
            for (int k = 0; k < 3; k++) {
                resultado[i][j] += primeraMatriz[i][k] * segundaMatriz[k][j]; // Sumamos el producto de los elementos correspondientes
            }
        }
    }
}

void copiarMatriz(int fuente[3][3], int destino[3][3]) {
    // Función para copiar una matriz en otra
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            destino[i][j] = fuente[i][j]; // Copiamos cada elemento de la matriz fuente a la matriz destino
        }
    }
}

void imprimirMatriz(int matriz[3][3]) {
    // Función para imprimir una matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]); // Imprimimos cada elemento seguido de un espacio
        }
        printf("\n"); // Nueva línea después de cada fila
    }
}

int main() {
    int matriz[3][3] = {
        {2, 0, 1},
        {3, 0, 0},
        {5, 1, 1}
    }; // Nuestra matriz inicial (3x3)

    int resultado[3][3]; // Matriz para almacenar el resultado
    int potencia = 2; // Potencia a la que queremos elevar la matriz
    int temporal[3][3]; // Matriz temporal para cálculos intermedios

    // Inicializamos la matriz resultante como la matriz identidad
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j)
                resultado[i][j] = 1; // La diagonal principal de la matriz identidad es 1
            else
                resultado[i][j] = 0; // El resto de los elementos de la matriz identidad son 0
        }
    }

    // Multiplicamos la matriz por sí misma tantas veces como sea necesario
    for (int p = 0; p < potencia; p++) {
        multiplicarMatrices(resultado, matriz, temporal); // Multiplicamos resultado por matriz y guardamos en temporal
        copiarMatriz(temporal, resultado); // Copiamos el resultado temporal de nuevo a resultado
    }

    // Imprimimos la matriz resultante
    printf("Matriz elevada a la potencia %d:\n", potencia);
    imprimirMatriz(resultado); // Llamamos a la función para imprimir la matriz resultante

    return 0;
}
