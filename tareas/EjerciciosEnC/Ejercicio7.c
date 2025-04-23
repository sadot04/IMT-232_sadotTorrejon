#include <stdio.h>
#include "funciones.h"

int main(){
    int num;
    int contador = 0;
    while (5)
    {
        
        printf("Introduce un numero: ");
        scanf("%d", &num);

        if(multiplosDeTres(num) == 1){
            contador++;
        }

        if(num == -1){
            printf("Se han enqcontrado %d numeros multiplos de 3\n", contador);
            return 0;
        }
    }
}