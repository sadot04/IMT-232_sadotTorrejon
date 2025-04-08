#include <stdio.h>
int main(void){
    int numero = 0;
    printf("Ingrese el numero: \n");
    scanf("%d", &numero);
    if(numero%2==0){
        printf("El numero es par\n");
    }else{
        printf("El numero es impar\n");
    }
    return 0;
}