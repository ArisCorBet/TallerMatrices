#include <stdio.h>


float determinante(int matriz[3][3]) {
    float det = matriz[0][0] * (matriz[1][1] * matriz[2][2] - matriz[1][2] * matriz[2][1])
              - matriz[0][1] * (matriz[1][0] * matriz[2][2] - matriz[1][2] * matriz[2][0])
              + matriz[0][2] * (matriz[1][0] * matriz[2][1] - matriz[1][1] * matriz[2][0]);
    return det;
}

void matrizAdjunta(int matriz[3][3], int adjunta[3][3]) {
    adjunta[0][0] = (matriz[1][1] * matriz[2][2] - matriz[1][2] * matriz[2][1]);
    adjunta[0][1] = -(matriz[1][0] * matriz[2][2] - matriz[1][2] * matriz[2][0]);
    adjunta[0][2] = (matriz[1][0] * matriz[+
    2][1] - matriz[1][1] * matriz[2][0]);
    
    adjunta[1][0] = -(matriz[0][1] * matriz[2][2] - matriz[0][2] * matriz[2][1]);
    adjunta[1][1] = (matriz[0][0] * matriz[2][2] - matriz[0][2] * matriz[2][0]);
    adjunta[1][2] = -(matriz[0][0] * matriz[2][1] - matriz[0][1] * matriz[2][0]);
    
    adjunta[2][0] = (matriz[0][1] * matriz[1][2] - matriz[0][2] * matriz[1][1]);
    adjunta[2][1] = -(matriz[0][0] * matriz[1][2] - matriz[0][2] * matriz[1][0]);
    adjunta[2][2] = (matriz[0][0] * matriz[1][1] - matriz[0][1] * matriz[1][0]);
}

void inversaMatriz(int matriz[3][3], float inversa[3][3]) {
    int adjunta[3][3];
    matrizAdjunta(matriz, adjunta);
    
    float det = determinante(matriz);
    if (det == 0) {
        printf("La matriz no es invertible.\n");
        return;
    }
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            inversa[i][j] = adjunta[i][j] / det;
        }
    }
}

int main() {
    int matriz[3][3] = {
        {1, 2, 3},
        {0, 1, 4},
        {5, 6, 0}
    };
    
    float inversa[3][3];
    
    inversaMatriz(matriz, inversa);
    
    printf("La matriz inversa es:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%f ", inversa[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
