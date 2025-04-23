#include <stdio.h>
#include "funciones.h"

int main(){
    int num1;
    int num2;
    while (2)
    {
       scanf("%d", &num1);
       scanf("%d", &num2);
    if(num1 == 0 && num2 == 0){
        printf("Saliendo del programa\n");
        return 0;
    }
       if(mayorMenorIgual(num1, num2) == 1){
            printf("El primer numero es mayor que el segundo\n");
        } else if(mayorMenorIgual(num1, num2) == -1){
            printf("El primer numero es menor que el segundo\n");
        } else {
            printf("Los numeros son iguales\n");
        }
    
}
}