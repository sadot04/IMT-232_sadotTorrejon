#include <stdio.h>
 int main (void){
    int N = 0;
    int suma = 0;
    printf("Ingrese el numero\n");
    scanf("%d", &N);

    for(int i = 0; i<=N ; i++){
        suma = i+suma;
    }
    printf("%d\n", suma);
 }