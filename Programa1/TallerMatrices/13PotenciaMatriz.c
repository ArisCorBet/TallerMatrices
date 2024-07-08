#include <stdio.h>

#define TAMANO 3 // Definimos el tamaño de la matriz (3x3 en este caso)

void multiplicarMatrices(int primeraMatriz[TAMANO][TAMANO], int segundaMatriz[TAMANO][TAMANO], int resultado[TAMANO][TAMANO]) {
    // Función para multiplicar dos matrices
    for (int i = 0; i < TAMANO; i++) {
        for (int j = 0; j < TAMANO; j++) {
            resultado[i][j] = 0; // Inicializamos el elemento en la matriz de resultado
            for (int k = 0; k < TAMANO; k++) {
                resultado[i][j] += primeraMatriz[i][k] * segundaMatriz[k][j]; // Sumamos el producto de los elementos correspondientes
            }
        }
    }
}

void copiarMatriz(int fuente[TAMANO][TAMANO], int destino[TAMANO][TAMANO]) {
    // Función para copiar una matriz en otra
    for (int i = 0; i < TAMANO; i++) {
        for (int j = 0; j < TAMANO; j++) {
            destino[i][j] = fuente[i][j]; // Copiamos cada elemento de la matriz fuente a la matriz destino
        }
    }
}

void imprimirMatriz(int matriz[TAMANO][TAMANO]) {
    // Función para imprimir una matriz
    for (int i = 0; i < TAMANO; i++) {
        for (int j = 0; j < TAMANO; j++) {
            printf("%d ", matriz[i][j]); // Imprimimos cada elemento seguido de un espacio
        }
        printf("\n"); // Nueva línea después de cada fila
    }
}

int main() {
    int matriz[TAMANO][TAMANO] = {
        {2, 0, 1},
        {3, 0, 0},
        {5, 1, 1}
    }; // Nuestra matriz inicial (3x3)

    int resultado[TAMANO][TAMANO]; // Matriz para almacenar el resultado
    int potencia = 2; // Potencia a la que queremos elevar la matriz
    int temporal[TAMANO][TAMANO]; // Matriz temporal para cálculos intermedios

    // Inicializamos la matriz resultante como la matriz identidad
    for (int i = 0; i < TAMANO; i++) {
        for (int j = 0; j < TAMANO; j++) {
            if (i == j)
                resultado[i][j] = 1; // La diagonal principal de la matriz identidad es 1
            else
                resultado[i][j] = 0; // El resto de los elementos de la matriz identidad son 0
        }
    }

    // Imprimimos la matriz original
    printf("Matriz original:\n");
    imprimirMatriz(matriz); // Llamamos a la función para imprimir la matriz original

    // Multiplicamos la matriz por sí misma tantas veces como sea necesario
    for (int p = 0; p < potencia; p++) {
        multiplicarMatrices(resultado, matriz, temporal); // Multiplicamos resultado por matriz y guardamos en temporal
        copiarMatriz(temporal, resultado); // Copiamos el resultado temporal de nuevo a resultado
    }

    // Imprimimos la matriz resultante
    printf("Matriz elevada a la potencia %d:\n", potencia);
    imprimirMatriz(resultado); // Llamamos a la función para imprimir la matriz resultante

    return 0; // Fin del programa
}
