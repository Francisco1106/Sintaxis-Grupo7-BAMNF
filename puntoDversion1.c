#include <stdio.h>
#define TAMANIO 50
 
 //d) Eliminar de una cadena dada todas las ocurrencias de un carácter dado
 
int busqueda(const char b[], int llave, int tamanio);
 
int main() {
	int x = 0;
	char cadena[TAMANIO];
	char cadena_2[TAMANIO] = {""};
 
	printf("Introduzca una frase: ");
	fgets(cadena, 50, stdin);
 
 	
	for (int i = 0; i < 50 && cadena[i] != '\n'; i++) {
		if (busqueda(cadena_2, cadena[i], 50) == -1) {
			cadena_2[x] = cadena[i];
			x++;
		}
	}
 
	printf("La frase sin ocurrencias es: %s\n", cadena_2);
 
	return 0;
}
 
int busqueda(const char b[], int llave, int tamanio) {
	for (int i = 0; i < tamanio; ++i) {
		if (b[i] == llave) {
			return i;
		}
 	}
	return -1;
}