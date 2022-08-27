#include <iostream>
#include <stdio.h>
#include <cstring>

using namespace std;

//prototipo de funciones
int automata(int[][62], int[], int[],char[], char[]);
int lenght(int[]);

int main(){
	//-------IDENTIFICADORES------
	int IdEstados[2];
	int IdEstadosFinales[1];
	int IdTT[3][62];
	char IdAlfabeto[70];
	
	//-------CONSTANTES------
	int ConsEstados[5];
	int ConsEstadosFinales[1];
	int ConsTT[5][62];
	char ConsAlfabeto[70];
	
	//-------OPERADORES------
	int OpEstados[2];
	int OpEstadosFinales[1];
	int OpTT[3][62];
	char OpAlfabeto[70];
	
	//-------CADENAS LITERALES------
	int CadLitEstados[2];
	int CadLitEstadosFinales[1];
	int CadLitTT[3][62];
	char CadLitAlfabeto[70];
	
	//-------CARACTERES DE PUNTUACION------
	int PuntuacionEstados[2];
	int PuntuacionEstadosFinales[1];
	int PuntuacionTT[3][62];
	char PuntuacionAlfabeto[70];
	
	int cod_ascii=48;
	int j;
	
	
	
	for(j=0;j<10;j++){
		//numeros del 0 al 9
		ConsAlfabeto[j]=cod_ascii;
		IdAlfabeto[j]=cod_ascii;
		CadLitAlfabeto[j]=cod_ascii;
		cod_ascii++;
		IdTT[0][j]=2;
		IdTT[1][j]=1;
		IdTT[2][j]=2;
	}
	cod_ascii=65;
	
	for(;j<36;j++){
		//letras minusculas
		ConsAlfabeto[j]=cod_ascii;
		IdAlfabeto[j]=cod_ascii;
		CadLitAlfabeto[j]=cod_ascii;
		cod_ascii++;
		IdTT[0][j]=1;
		IdTT[1][j]=1;
		IdTT[2][j]=2;
	}
	
	cod_ascii=97;
	for(;j<62;j++){
		//letras mayusculas
		ConsAlfabeto[j]=cod_ascii;
		IdAlfabeto[j]=cod_ascii;
		CadLitAlfabeto[j]=cod_ascii;
		cod_ascii++;
		IdTT[0][j]=1;
		IdTT[1][j]=1;
		IdTT[2][j]=2;
	}
	ConsAlfabeto[62]='~';
	CadLitAlfabeto[62]='-';
	
	IdAlfabeto[62]=ConsAlfabeto[63]='\0';
	
	for(j=0;j<62;j++){
		printf("%d %c\n",j,alfabeto[j]);
	}

	
	
	estadosIdentificador[0]=0;
	estadosIdentificador[1]=1;
	
	estadosFinales[0]=1;
	char cadena[10]= "22a";
	printf(" valor de cadena[0]: %c\n", cadena[0]);
	
	printf(" valor del automata: %d", automata(IdTT, estadosIdentificador, estadosFinales, alfabeto, cadena));
	
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


