#include <stdio.h>

int main(){
    
    printf("==========Matrices=========\n");
    
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

    printf("la primera columna es:\n");
        for (int i = 0; i < 3; i++)
        {
            printf("%d\n",matriz[i][0]);
        } 
return 0;
}