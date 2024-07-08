#include <stdio.h>

int main() {
    printf("==========Matrices=========\n");

    //crear arreglo definido como matriz y definir valor de cada posicion
    int Matriz [3][3];
    Matriz[0][0]= 1;
    Matriz[0][1]= 2;
    Matriz[0][2]= 3;
    Matriz[1][0]= 4;
    Matriz[1][1]= 5;
    Matriz[1][2]= 6;
    Matriz[2][0]= 7;
    Matriz[2][1]= 8;
    Matriz[2][2]= 9;

    int transpuesta[3][3];

    for (int i = 0; i < 3; i++) { //Recorrer filas
        for (int j = 0; j < 3; j++) { //Recorrer columnas
            transpuesta[j][i] = Matriz[i][j]; //Le da la vuelta a la matriz [j][i]
        }
    }


    //Imprimir matriz original
    printf("La matriz original es:\n"); 
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", Matriz[i][j]);
        }
        printf("\n");
    }


//Imprimir matriz transpuesta
    printf("La matriz transpuesta es:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", transpuesta[i][j]);
        }
        printf("\n");
    }

    return 0;
}
