#include <stdio.h>
int main(void){

    int numero = 0;
    printf("Ingrese el numero\n");
    scanf("%d", &numero);
    if(numero>-1){
        printf("El numero es positivo\n");
    }else{
        printf("El numero es negativo\n");
    }
    return 0;
}