#include "funcionesBarco.h"


void bienvenida(){
    printf("Bienvenido al barco! \n");
}

void navegarAlSur(int *x, int *y){
    printf("Navegando al SUR! \n");
    *x = *x+1;
    *y-=10;
}

void imprimirPosicion(int x, int y){
    printf("La posicion actual del barco es: %d, %d \n", x, y);
}
