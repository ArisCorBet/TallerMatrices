#include <stdio.h>
int main (){

/////////////////// Imprimir Matriz ////////////////////
    printf("==========Matrices=========\n");
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

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j <3; j++)
        {
            printf(" %d ",Matriz [i] [j]);
        }
        printf("\n");
    }
    
    return 0;
}