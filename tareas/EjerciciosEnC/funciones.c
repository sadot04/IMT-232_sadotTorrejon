#include <stdio.h>
#include "funciones.h"

int parImpar(int num){
    if(num % 2 == 0){
        return 0; 
    } else {
        return 1; 
    }
}
int contarDigitos(int num){
    int contador = 0;
    while(num != 0){
        num /= 10;
        contador++;
    }
    return contador;
}
int sumaDigitos(int num1, int num2){
    return num1 + num2;
}
int restaDigitos(int num1, int num2){
    return num1 - num2;
}
int multiplicacionDigitos(int num1, int num2){
    return num1 * num2;
}

int mayorMenorIgual(int num1, int num2){
    if(num1 > num2){
        return 1; 
    } else if(num1 < num2){
        return -1; 
    } else {
        return 0; 
    }
}
int multiplosDeTres(int num){
    if(num % 3 == 0){
        return 1; 
    } else {
        return 0; 
    }
}

int factorial(int num){
    if(num == 0 || num == 1){
        return 1;
    } else{
        return num  * factorial(num - 1);
    }
}