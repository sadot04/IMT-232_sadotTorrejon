#include <stdio.h>
#include "funciones.h"

int main(){
    int numero;
    int opcion;
    while (1)
    {
        printf("===================================================\n");
        printf("1. Verificar si un número es primo\n");
        printf("2. Calcular el factorial de un número\n");
        printf("3. Contar números pares e impares entre 1 y N\n");
        printf("4. Mostrar múltiplos de 3 entre 1 y N\n");
        printf("5. Salir del programa\n");
        printf("===================================================\n");
        scanf("%d", &opcion);
        
        //Termina el bucle si se selecciona 5
        if(opcion == 5){
            printf("Saliendo del programa, adios :)\n");
            return 0;
        }
        printf("Introduzca un numero entero positivo: ");

        
        scanf("%d", &numero);

            //Bucle para verificar que sea positivo
            while (numero<0)
            {
                printf("Introduzca un numero entero positivo: ");
                scanf("%d", &numero);

            }
         
        switch (opcion)
        {
        case 1:
        if(esPrimo(numero)==0){
            printf("No es primo \n");
        } else{
            printf("Si es primo \n");
        }
            ;
            break;
        case 2:
            printf("El factorial de %d es: %d \n", numero, factorial(numero));
            break;
        case 3:
            printf("Entre 1 y %d hay %d pares y %d impares\n", numero, contarDigitos(numero), (numero-contarDigitos(numero)));
            break;
        case 4:
            printf("Los multiplos de 3 entre 1 y %d son: \n", numero);
            multiplosDeTres(numero);
            break;
        case 5:
            return 0;
            break;
        default:
            break;
        }
    }
    
}