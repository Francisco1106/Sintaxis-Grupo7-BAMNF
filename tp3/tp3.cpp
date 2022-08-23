#include <iostream>
#include <stdio.h>
#include <cstring>

using namespace std;

//prototipo de funciones
int automata(int[][62], int[], int[],char[], char[]);
int lenght(int[]);

int main(){
	int estadosIdentificador[2];
	int estadosFinales[1];
	int identificador[3][62];
	char alfabeto[70];
	int cod_ascii=48;
	int j;
	
	
	
	for(j=0;j<10;j++){
	alfabeto[j]=cod_ascii;
	cod_ascii++;
	identificador[0][j]=2;
	identificador[1][j]=1;
	identificador[2][j]=2;
	}
	cod_ascii=65;
	for(;j<36;j++){
		alfabeto[j]=cod_ascii;
		cod_ascii++;
		identificador[0][j]=1;
		identificador[1][j]=1;
		identificador[2][j]=2;
	}
	
	cod_ascii=97;
	for(;j<62;j++){
		alfabeto[j]=cod_ascii;
		cod_ascii++;
		identificador[0][j]=1;
		identificador[1][j]=1;
		identificador[2][j]=2;
	}
	alfabeto[62]='\0';
	
	for(j=0;j<62;j++){
		printf("%d %c\n",j,alfabeto[j]);
	}

	
	
	estadosIdentificador[0]=0;
	estadosIdentificador[1]=1;
	
	estadosFinales[0]=1;
	char cadena[10]= "22a";
	printf(" valor de cadena[0]: %c\n", cadena[0]);
	
	printf(" valor del automata: %d", automata(identificador, estadosIdentificador, estadosFinales, alfabeto, cadena));
	
	return 0;
}

int automata(int TT[][62], int estados[], int estadosFinales[],char alfabeto[], char cadena[]){
	int i=0, j=0, estadoActual=0, resultado=1;
	int bandera=0;
	while (cadena[i]!= '\0'){
		printf("cadena[i]: %c \n", cadena[0]);
		while((cadena[i] != alfabeto[j] )&& alfabeto[j] != '\0'){
			j++;	
			printf("cadena[%d]==alfabeto[%d] >> %d  %c %c\n", i, j, (cadena[i]==alfabeto[12]), cadena[i], alfabeto[j]);
		}
		printf("valor de alfabeto[%d]: %c", j, alfabeto[j]);
	
		if(alfabeto[j]==cadena[i]){
		estadoActual = TT[estadoActual][j];	}
		else {
		resultado=0;
		printf("else");
		break;
		}
		i++;
		
	}
	if(resultado==1){
	for(int k=0; k<lenght(estadosFinales);k++){
		if(estadoActual == estadosFinales[k]){
			bandera=1;
		}
	}
	resultado=bandera;}
	
	return resultado;
}

int lenght(int array[]){
	int cant= sizeof array/ sizeof array[0];
	return cant;
}


