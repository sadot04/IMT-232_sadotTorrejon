#include <stdio.h>
int main (void){
    int edad = 0;
    printf("Ingrese la edad\n");
    scanf("%d", &edad);
    if(edad<13){
        printf("Infancia\n");
    } if(edad>=13 && edad<18) {
        printf("Adolescencia\n");
    } if (edad>=18){
        printf("Adultez\n");
    }
    return 0;
}