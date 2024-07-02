#include <stdio.h>

int main(){

    //Recorrer diagonal secundaria
printf("========= Imprimir diagonal secundari de la matriz ========= \n");
    int matriz [4][4];
    matriz[0][0]= 1;
    matriz[0][1]= 2;
    matriz[0][2]= 3;
    matriz[0][3]= 4;
    matriz[1][0]= 5;
    matriz[1][1]= 6;
    matriz[1][2]= 7;
    matriz[1][3]= 8;
    matriz[2][0]= 9;
    matriz[2][1]= 10;
    matriz[2][2]= 11;
    matriz[2][3]= 12;
    matriz[3][0]= 13;
    matriz[3][1]= 14;
    matriz[3][2]= 15;
    matriz[3][3]= 16;

    for (int i = 0; i <4; i++)
    {
        printf("%d", matriz[i][4-1-i]);
        printf("\n");
    }
    
    printf("========= Contorno de la matriz ========= \n");
    /////////////////////////////////////////////////////////////


    //1  2   3  4    [0][0]  [0][1]  [0][2]  [0][3]
    //5         8    [1][0]  [1][1]  [1][2]  [1][3]
    //9        12    [2][0]  [2][1]  [2][2]  [2][3]
    //13 14 15 16    [3][0]  [3][1]  [3][2]  [3][3]

    //Recorrer el contorno:
    // m[0][0] m[0][1] m[0][2] m[0][3]
    // m[0][3] m[1][3] m[2][3] m[3][3]
    // m[3][3] m[3][2] m[3][1] m[3][0]
    // m[3][0] m[2][0] m[1][0] m[0][0]

   
    for (int j = 0; j < 4; j++) {
        printf(" %d ", matriz[0][j]);
        
    }
    for (int i = 1; i < 4; i++) {
        printf(" %d ", matriz[i][3]);

    }
    for (int j = 2; j >= 0; j--) {
        printf(" %d ", matriz[3][j]);
    
    }
    for (int i = 2; i > 0; i--) {
        printf(" %d ", matriz[i][0]);        
    }

    /////////////////////////////////////////////////////////////////////////

      //Recorrer diagonal secundaria ingresanto filas y columnas
      // El sizeof
      int l = sizeof(matriz[0][0]);
      printf("\n El tamano de la matriz %d\n",l);

   // Crear ogenerar una funcion o procedimiento para obtener  el numero de columnas y filas de una matriz 
   //Hacer un laberinto 3D

    return 0;
}