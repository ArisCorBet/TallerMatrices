#include <stdio.h>
int main(){

   
    printf("==========Matrices=========\n");

    //crear arreglo definido como matriz y definir valor de cada posicion
    int matriz [3][3];
    matriz[0][0]=1;
    matriz[0][1]=2;
    matriz[0][2]=3;
    matriz[1][0]=4;
    matriz[1][1]=5;
    matriz[1][2]=6;
    matriz[2][0]=7;
    matriz[2][1]=8;
    matriz[2][2]=9;


///////////////////////Elementos impares//////////////////

    for (int i = 0; i < 3; i++) // i para filas
            {
                for (int j = 0; j < 3; j++)  //j para columnas
                {
                    if (matriz[i][j] %2 == !0 ) //Condicion para solo imprimir los numeros pares
                    {
                        printf("Elementos impares: %d\n",matriz[i][j]);
                    }
                } 
            }
        printf("\n");
return 0;
}
