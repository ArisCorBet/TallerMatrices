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

    // Ordenar la baraja usando el método burbuja
    for (int i = 0; i < 51; i++) {
        for (int j = 0; j < 51 - i; j++) {
            int num1, num2;
            char palo1, palo2;

            // Extraer número y palo de cada carta
            sscanf(baraja[j], "%d%c", &num1, &palo1);
            sscanf(baraja[j + 1], "%d%c", &num2, &palo2);

            // Comparar palos y luego números
            if (palo1 > palo2 || (palo1 == palo2 && num1 > num2)) {
                char temp[4];
                sprintf(temp, "%s", baraja[j]);
                sprintf(baraja[j], "%s", baraja[j + 1]);
                sprintf(baraja[j + 1], "%s", temp);
            }
        }
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
