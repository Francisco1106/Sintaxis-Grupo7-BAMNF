#include <stdio.h>

void concatenar(char primero[], char segundo[], char destino[]);

int main()
{
	char A[]= "Nombre";
	char B[]= "Apellido";
	char C[50];
	
	printf("primer cadena: %s \n", A);
	printf("segunda cadena: %s \n", B);
	concatenar (A,B,C);
	printf("Concatenado: %s", C);
	return 0;	
}
void concatenar(char primero[], char segundo[], char destino[])
{
	int i=0, j=0;
	while(primero[i] != '\0'){
		destino[i]=primero[i];
		i++;
	}
	while(segundo[j] != '\0'){
		destino[i+j]= segundo[j];
		j++;
	}	
}
