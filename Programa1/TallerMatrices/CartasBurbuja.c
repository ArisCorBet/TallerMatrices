#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char baraja[52][4];  // Para almacenar hasta cartas y simbolo (dos dígitos y un carácter)
    char simbolo[] = {'c', 'E', 'T', 'D'};  // simbolo de la baraja: tréboles, espadas, corazones rojos y corazones negros
    int posicionbaraja = 0;

    // Generar la baraja
    for (int p = 0; p < 4; p++) {  // Iterar sobre los simbolos
        for (int n = 1; n <= 13; n++) {  // Iterar sobre los números del 1 al 13
            sprintf(baraja[posicionbaraja], "%d%c", n, simbolo[p]);  // Crear la carta y almacenarla en la baraja
            posicionbaraja++;
        }
    }

    // Mezclar la baraja
    srand(time(NULL));  // Inicializar el generador de números aleatorios
    for (int i = 0; i < 52; i++) {
        int j = rand() % 52;  // Generar un índice aleatorio
        char temp[4];//Para almacenar temporalmente una carta
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
            char simbolo1, simbolo2;

            // Extraer número y simbolo de cada carta
            sscanf(baraja[j], "%d%c", &num1, &simbolo1);
            sscanf(baraja[j + 1], "%d%c", &num2, &simbolo2);

            // Comparar simbolos y luego números
            //Los simbolo se pueden comparar gracias a que se guardan en formato de codigo Ascii
            if (simbolo1 > simbolo2 || (simbolo1 == simbolo2 && num1 > num2)) {
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
