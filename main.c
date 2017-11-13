#include <stdio.h>
#include <conio.h>

void mensajeDeBienvenida(){
	printf("Bienvenido a su barco!\n");
}

void imprimirPosicion(int x, int y){
	printf("Hola! Tu barco esta en la posicion: %d, %d\n", x, y);
}

void navegarAlSur(int x, int y){
	printf("Navegando al SUR\n");
	x++;
	y+=10;
}

int main(){
	int x = 0;
	int y = 0;
	
	printf("Direccion de x: %p \n", &x);
	
	int *direccion_x = &x;
	printf("Direccion de x: %p \n", direccion_x);
	mensajeDeBienvenida();
	imprimirPosicion(x, y);
	
	navegarAlSur(x, y);
	imprimirPosicion(x, y);
	
	getch();
	return 0;
}
