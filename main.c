#include <stdio.h>
#include <conio.h>

void mensajeDeBienvenida(){
	printf("Bienvenido a su barco!\n");
}

void imprimirPosicion(int x, int y){
	printf("Hola! Tu barco esta en la posicion: %d, %d\n", x, y);
}

void navegarAlSur(){
	printf("Navegando al SUR\n");
	x++;
	y+=10;
}

int main(){
	int x = 0;
	int y = 0;
	
	mensajeDeBienvenida();
	imprimirPosicion();
	
	navegarAlSur();
	imprimirPosicion();
	
	getch();
	return 0;
}
