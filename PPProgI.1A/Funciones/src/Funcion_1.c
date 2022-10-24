#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Funcion nro. 1
float aplicarDescuento(int precioBase);

// Funcion nro. 2
int  contarCaracteres(char cadena[], char caracter);

int main(void) {

	setbuf(stdout, NULL);

	// // Funcion nro. 1
	aplicarDescuento(10);



	// // Funcion nro. 2
	char letras[8] = {'c', 'a', 'r', 'l', 'i', 't', 'o', 's',};
	contarCaracteres(letras, 'r');

	return EXIT_SUCCESS;
}

// Funcion nro. 1
float aplicarDescuento(int precioBase){

	float precioConDescuento;

	precioConDescuento = (float) precioBase * 0.95;

	return precioConDescuento;
}

// Funcion nro. 2
int  contarCaracteres(char cadena[], char caracter){

	int tam = strlen(cadena);
	int contador = 0;

	if(cadena != NULL){

		for(int i = 0; i < tam; i++){

			if(caracter == cadena[i]){

				contador++;
			}
		}
	}

	return contador;
}
