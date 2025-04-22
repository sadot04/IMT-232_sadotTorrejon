#include <stdio.h>
#include "funciones.h"

int main() {
    int numero;

    while (5) {
        printf("Introduce un número (-1 para salir): ");
        scanf("%d", &numero);

        switch (numero) {
            case -1:
                printf("Saliendo del programa\n");
                return 0; 
            default:
                if (parImpar(numero)) {
                    printf("El número es impar.\n");
                } else {
                    printf("El número es par.\n");
                }
                break;
        }
    }
    return 0;
}