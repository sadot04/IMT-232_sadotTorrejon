#include <stdio.h>
#include "funciones.h"

int main(){
    int numero;

    while (2){
        printf("Introduce un numero (0 para salir)");
        scanf("%d", &numero);
        if (numero == 0){
            printf("Saliendo del programa\n");
            return 0;
        } else {
            contarDigitos(numero);
            printf("El numero %d tiene %d digitos\n", numero, contarDigitos(numero));
        }
    }
}