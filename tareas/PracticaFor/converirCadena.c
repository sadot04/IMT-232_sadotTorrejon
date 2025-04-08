#include <stdio.h>
#include <string.h>

int main(void) {
    char cadena[100];
    printf("Ingrese una palabra: ");
    scanf("%s", cadena);

    int longitud = 0;
    while (cadena[longitud] != '\0') {
        longitud++;
    }

    printf("Palabra invertida: ");
    for (int i = longitud - 1; i >= 0; i--) {
        printf("%c", cadena[i]);
    }
    printf("\n");

    return 0;
}