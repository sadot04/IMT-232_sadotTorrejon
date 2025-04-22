#include <stdio.h>
#include "funciones.h"

    int main() {
        Semaforo estado = ROJO;
        int ciclos = 0;
    
        while (ciclos < 10) {
            switch (estado) {
                case ROJO:
                    printf("El semáforo está en ROJO.\n");
                    estado = VERDE; 
                    break;
                case VERDE:
                    printf("El semáforo está en VERDE.\n");
                    estado = AMARILLO; 
                    break;
                case AMARILLO:
                    printf("El semáforo está en AMARILLO.\n");
                    estado = ROJO; 
                    break;
            }
            ciclos++; 
        }
}