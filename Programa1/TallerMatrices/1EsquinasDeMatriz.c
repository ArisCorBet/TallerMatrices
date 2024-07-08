#include <stdio.h>
int main(){

    printf("========== Presentar esquinas de Matriz =========\n");
    int Matriz[3][3]; //crear arreglo definido como matriz y definir valor de cada posicion
    Matriz[0][0] = 1;
    Matriz[0][1] = 2;
    Matriz[0][2] = 3;
    Matriz[1][0] = 4;
    Matriz[1][1] = 5;
    Matriz[1][2] = 6;
    Matriz[2][0] = 7;
    Matriz[2][1] = 8;
    Matriz[2][2] = 9;

    //1  2   3     [0][0]  [0][1]  [0][2]  
    //4  5   6     [1][0]  [1][1]  [1][2]  
    //7  8   9     [2][0]  [2][1]  [2][2]  
   
    //presentar matriz con condicion
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {

            if (Matriz[i][j] == Matriz[0][1]) {
                printf("   "); // Imprimir espacio en lugar del número
            } else if (Matriz[i][j] == Matriz[1][0]) {
                printf("   "); // Imprimir espacio en lugar del número
            } else if (Matriz[i][j] == Matriz[2][1]) {
                printf("   "); // Imprimir espacio en lugar del número
            } else if (Matriz[i][j] == Matriz[1][2]) {
                printf("   "); // Imprimir espacio en lugar del número
            } else if (Matriz[i][j] == Matriz[1][1]) {
                printf("   "); // Imprimir espacio en lugar del número
            }else {
                printf(" %d ", Matriz[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}
