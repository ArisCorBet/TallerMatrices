#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char baraja[52][4];  // Para almacenar hasta "13c" (dos dígitos y un carácter)
    char palos[] = {'c', 'E', 'T', 'D'};  // Palos de la baraja: tréboles, espadas, corazones rojos y corazones negros
    int index = 0;

    // Generar la baraja
    for (int p = 0; p < 4; p++) {  // Iterar sobre los palos
        for (int n = 1; n <= 13; n++) {  // Iterar sobre los números del 1 al 13
            sprintf(baraja[index], "%d%c", n, palos[p]);  // Crear la carta y almacenarla en la baraja
            index++;
        }
    }

    // Mezclar la baraja
    srand(time(NULL));  // Inicializar el generador de números aleatorios
    for (int i = 0; i < 52; i++) {
        int j = rand() % 52;  // Generar un índice aleatorio
        char temp[4];
        sprintf(temp, "%s", baraja[i]);  // Intercambiar las cartas baraja[i] y baraja[j]
        sprintf(baraja[i], "%s", baraja[j]);
        sprintf(baraja[j], "%s", temp);
    }

    // Imprimir la baraja mezclada
    printf("Cartas mezcladas:\n");
    for (int i = 0; i < 52; i++) {
        printf("%s ", baraja[i]);  // Imprimir cada carta
        if ((i + 1) % 13 == 0) {
            printf("\n");  // Nueva línea después de cada 13 cartas
        }
    }
    printf("\n");

    // Ordenar la baraja usando el método de inserción
    for (int i = 1; i < 52; i++) {
        char key[4];
        sprintf(key, "%s", baraja[i]);
        int j = i - 1;
        int key_num, baraja_num;
        char key_palo, baraja_palo;

        sscanf(key, "%d%c", &key_num, &key_palo);

        // Comparar y desplazar las cartas mayores hacia la derecha
        while (j >= 0) {
            sscanf(baraja[j], "%d%c", &baraja_num, &baraja_palo);
            if (baraja_palo > key_palo || (baraja_palo == key_palo && baraja_num > key_num)) {
                sprintf(baraja[j + 1], "%s", baraja[j]);
                j--;
            } else {
                break;
            }
        }
        sprintf(baraja[j + 1], "%s", key);
    }

    // Imprimir la baraja ordenada
    printf("Cartas ordenadas:\n");
    for (int i = 0; i < 52; i++) {
        printf("%s ", baraja[i]);  // Imprimir cada carta
        if ((i + 1) % 13 == 0) {
            printf("\n");  // Nueva línea después de cada 13 cartas
        }
    }
    printf("\n");

    return 0;
}
