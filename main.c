#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funcionesBarco.h"

int main() {
    int x = 0;
    int y = 0;
    
    bienvenida();
    imprimirPosicion(x, y);
    
    navegarAlSur(&x, &y);
    
    imprimirPosicion(x, y);
    
    printf("El valor de X es: %d \n", x);
    printf("La direccion de X es: %p \n", &x);
    int *direccion_x = &x;
    printf("La direccion de X guardada en otra variable es: %p \n", direccion_x);
    
    navegarAlSur(&x, &y);
    imprimirPosicion(x, y);
    
    return EXIT_SUCCESS;
}
