#include <stdio.h>

int main() {
    float A[2][2], B[2][2], resultado[2][2];
    
    // Ingreso de elementos para la matriz A (2x2)
    printf("Ingrese los elementos de la matriz A (2x2):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%f", &A[i][j]);
        }
    }
    
    // Ingreso de elementos para la matriz B (2x2)
    printf("Ingrese los elementos de la matriz B (2x2):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%f", &B[i][j]);
        }
    }
    
    // Calcular el determinante de B
    float determinante = B[0][0] * B[1][1] - B[0][1] * B[1][0];
    
    // Verificar si B tiene inversa (determinante diferente de 0)
    if (determinante != 0) {
        // Calcular la matriz inversa de B
        float invDet = 1.0 / determinante;
        float B_inv[2][2];
        
        B_inv[0][0] = B[1][1] * invDet;
        B_inv[0][1] = -B[0][1] * invDet;
        B_inv[1][0] = -B[1][0] * invDet;
        B_inv[1][1] = B[0][0] * invDet;
        
        // Multiplicar A por la inversa de B para obtener el resultado
        resultado[0][0] = A[0][0] * B_inv[0][0] + A[0][1] * B_inv[1][0];
        resultado[0][1] = A[0][0] * B_inv[0][1] + A[0][1] * B_inv[1][1];
        resultado[1][0] = A[1][0] * B_inv[0][0] + A[1][1] * B_inv[1][0];
        resultado[1][1] = A[1][0] * B_inv[0][1] + A[1][1] * B_inv[1][1];
        
        // Mostrar el resultado de la multiplicación A * B^-1
        printf("El resultado de A / B es:\n");
        printf("%f %f\n", resultado[0][0], resultado[0][1]);
        printf("%f %f\n", resultado[1][0], resultado[1][1]);
    } else {
        // Si B no tiene inversa
        printf("La matriz B no tiene inversa y, por lo tanto, la división no es posible.\n");
    }
    
    return 0;
}
