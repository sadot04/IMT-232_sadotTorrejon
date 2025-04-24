#include <stdio.h>
#include "funciones.h"


int esPrimo(int numero) {
        if (numero <= 1) {
            return 0; 
        }
        for (int i = 2; i * i <= numero; i++) {
            if (numero % i == 0) {
                return 0; 
            }
        }
        return 1; 
}
int factorial(int num){
        if(num == 0 || num == 1){
            return 1;
        } else {
            return num  * factorial(num - 1);
        }
}

int contarDigitos(int num){
    int contador =0;
    for(int i =1; i<=num; i++){
        if(i % 2 == 0){
            contador++;
        }
    }
    return contador;
}

int multiplosDeTres(int num){
    for(int i =1; i<=num; i++){
        if(i%3==0){
            printf("%d \n", i);
        }
    }
}