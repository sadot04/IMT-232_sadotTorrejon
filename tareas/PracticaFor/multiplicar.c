#include <stdio.h>

int main (void){
    int N = 0;
    printf("Ingrese el numero\n");
    scanf("%d", &N);
    
    for(int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", N, i, N * i);
    }

    return 0;
}