#include <stdio.h>

int main(void){
	int numeroA = 0;
	int numeroB = 0;

	printf("Ingrese el primer numero \n");
	scanf("%d", &numeroA);
	printf("Ingrese el segundo numero\n");
	scanf("%d", &numeroB);

	if(numeroA>numeroB){
	printf("EL numero mayor es: %d \n",numeroA);
	}if(numeroA==numeroB){
	printf("Los numeros son iguales\n");
	}else{
	printf("EL numero mayor es: %d \n",numeroB);
	}
	return 0;
}
