#include <stdio.h>

void imprimirMatriz(int n, float matriz[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%f ", matriz[i][j]);
        }
        printf("\n");
    }
}

int invertirMatriz2x2(float matriz[2][2], float inversa[2][2]) {
    float determinante = matriz[0][0] * matriz[1][1] - matriz[0][1] * matriz[1][0];
    if (determinante == 0) {
        return 0; // No tiene inversa si el determinante es 0
    }
    
    float invDet = 1.0 / determinante;
    inversa[0][0] = matriz[1][1] * invDet;
    inversa[0][1] = -matriz[0][1] * invDet;
    inversa[1][0] = -matriz[1][0] * invDet;
    inversa[1][1] = matriz[0][0] * invDet;
    
    return 1;
}

void multiplicarMatrices2x2(float A[2][2], float B[2][2], float resultado[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                resultado[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    float A[2][2], B[2][2], B_inv[2][2], resultado[2][2];
    
    printf("Ingrese los elementos de la matriz A (2x2):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%f", &A[i][j]);
        }
    }
    
    printf("Ingrese los elementos de la matriz B (2x2):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%f", &B[i][j]);
        }
    }
    
    if (invertirMatriz2x2(B, B_inv)) {
        multiplicarMatrices2x2(A, B_inv, resultado);
        printf("El resultado de A / B es:\n");
        imprimirMatriz(2, resultado);
    } else {
        printf("La matriz B no tiene inversa y, por lo tanto, la division no es posible.\n");
    }
    
    return 0;
}
