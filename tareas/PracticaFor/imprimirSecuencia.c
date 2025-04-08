#include <stdio.h>

int main (void){
    int N = 0;
    printf("Ingrese el numero\n");
    scanf("%d", &N);
    for(int i = 1 ; i<=N ; i++){
        printf("%d\n", i);
    }
}