#include <stdio.h>

int main(void){
    int N = 0;
    int contador = 0;
    printf("Ingrese el numero\n");
    scanf("%d", &N);
    while (N != 0)
    {
        N = N / 10;
     contador++;
    }
    printf("%d\n", contador);
    return 0;
}