#include <stdio.h>
#include "funciones.h"

int main(){
    int num1;
    int num2;
    int opcion;
    while (1){
        printf("Elige una opcion:\n");
        printf("1. Sumar\n");
        printf("2. Restar\n");  
        printf("3. Multiplicar\n");
        printf("4. Salir\n");
        scanf("%d", &opcion);
if(opcion == 4){
            printf("Saliendo del programa\n");
            return 0;
        }
        printf("Introduce el primer numero: ");
        scanf("%d", &num1);
        printf("Introduce el segundo numero: ");
        scanf("%d", &num2);
        switch (opcion)
        {

        case (1):
        printf("La suma es: %d\n", sumaDigitos(num1, num2));
            break;
        case (2):
            printf("La resta es: %d\n", restaDigitos(num1, num2));
            break;
        case (3):
            printf("La multiplicacion es: %d\n", multiplicacionDigitos(num1, num2));
            break;
        default:
            return 0;
        }
    }
}