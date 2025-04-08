#include <stdio.h>

int main (void){
    printf("Ingrese el año\n");
    int anio = 0;
    scanf("%d", &anio);
    if((anio%4==0 && anio%100!=0 )||( anio%400==0)){
        printf("El año es biciesto\n");
    }else{
        printf("El año no es biciesto\n");
    }
    return 0;
}