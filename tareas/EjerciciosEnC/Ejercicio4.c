#include <stdio.h>
#include "funciones.h"

int main() {
    int numero;
    int acumulador = 0;

    while (1) { 
        printf("Introduce un número (negativo para salir): ");
        scanf("%d", &numero);

        if (numero < 0) {
            printf("El total acumulado es: %d\n", acumulador);
            break;
        }

        acumulador = sumaDigitos(acumulador, numero);
    }

    return 0;
}