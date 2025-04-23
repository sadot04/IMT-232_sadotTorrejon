#include <stdio.h>
#include "funciones.h"

int main(){
    int numero;
    printf("Ingrese el numero: ");
    scanf("%d", &numero);
    printf("El numero invertido es: %d \n", invertirNumero(numero));
}