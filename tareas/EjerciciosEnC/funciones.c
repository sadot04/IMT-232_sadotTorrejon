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