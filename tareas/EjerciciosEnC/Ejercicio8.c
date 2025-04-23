#include <stdio.h>
#include "funciones.h"

int main(){
    int num;

    while (1)
    {
        printf("Ingrese el numero: ");
        scanf("%d", &num);
       if(num <= 0){
        return 0;
       }
       printf("El factorial es: %d \n", factorial(num));
    }
    
}