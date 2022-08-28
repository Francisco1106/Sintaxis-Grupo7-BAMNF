#include <iostream>
#include <stdio.h>
#include <cstring>

using namespace std;

//prototipo de funciones
int automata(int[][62], int[],char[], char[]);
int lenght(int[]);

int main(){
	//-------IDENTIFICADORES------
	int IdEstadosFinales[1]={2};
	int IdTT[4][62];
	char IdAlfabeto[70]="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	
	//-------CONSTANTES------
	int ConsEstadosFinales[1];
	int ConsTT[5][62];
	char ConsAlfabeto[70]="0123456789~";
	
	//-------OPERADORES------
	int OpEstadosFinales[2];
	int OpTT[3][62];
	char OpAlfabeto[8]="+-*/!¡=";
	
	//-------CADENAS LITERALES------
	int CadLitEstadosFinales[1];
	int CadLitTT[3][62];
	char CadLitAlfabeto[70]="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz-";
	
	//-------CARACTERES DE PUNTUACION------
	int PuntuacionEstadosFinales[1];
	int PuntuacionTT[3][62];
	char PuntuacionAlfabeto[8]="\n{}[]()";
	
	//-------PALABRAS RESERVADAS------
	int PalabrasReservEstadosFinales[7];
	int PalabrasReservTT[35][62];
	char PalabrasReservAlfabeto[70]="numeroptalbwhifd";
	
	int j,i;
	

	
	for(j=0;j<10;j++){
		//numeros del 0 al 9
		IdTT[0][j]=3;
		IdTT[1][j]=1;
		IdTT[2][j]=1;
		IdTT[3][j]=3;
		
		ConsTT[0][j]= 4;
		ConsTT[1][j]= 2;
		ConsTT[2][j]= 2;
		ConsTT[3][j]= 4;
		ConsTT[4][j]= 4;
	}
	
	for(;j<62;j++){
		//letras
		IdTT[0][j]=1;
		IdTT[1][j]=2;
		IdTT[2][j]=2;
		IdTT[3][j]=3;
	}
	// ---------LLENANDO CONS---------------
	ConsTT[0][10]= 1;
	ConsTT[1][10]= 4;
	ConsTT[2][10]= 3;
	ConsTT[3][10]= 4;
	ConsTT[4][10]= 4;
	
	ConsEstadosFinales[0]=3;
	//----------LLENADO OpTT-----------
	OpTT[0][0]=OpTT[0][1]=OpTT[0][2]=OpTT[0][3]= 1;
	OpTT[0][4]=3;
	OpTT[0][5]=4;
	OpTT[0][6]=2;
	for(j=0;j<7;j++){ OpTT[1][j]=4; OpTT[4][j]; OpTT[3][j];}
	for(j=0;j<6;j++){ OpTT[2][j]=4;}
	OpTT[2][6]=1;
	OpTT[3][5]=1;
	
	OpEstadosFinales[0]=1;
	OpEstadosFinales[1]=2;
	
	//------------LLENADO PalabrasReserv------------
	for(j=0;j<17; j++){
		for(i=0; i<36; i++){
			PalabrasReservTT[i][j]=35;
		}
	}
	PalabrasReservTT[0][0]=1;
	PalabrasReservTT[0][4] = 22;
	PalabrasReservTT[0][5] = 30;
	PalabrasReservTT[0][6] = 7;
	PalabrasReservTT[1][1] = 2;
	PalabrasReservTT[2][2] = 3;
	PalabrasReservTT[3][3] = 4;
	PalabrasReservTT[4][4] = 5;
	PalabrasReservTT[5][5] = 6;
	PalabrasReservTT[11][4] = 12;
	PalabrasReservTT[17][3] = 18;
	PalabrasReservTT[19][5] = 20;
	PalabrasReservTT[0][4] = 22;
	PalabrasReservTT[20][4] = 21;
	PalabrasReservTT[22][3] = 23;
	PalabrasReservTT[24][1] = 25;
	PalabrasReservTT[25][4] = 26;
	PalabrasReservTT[26][0] = 27;
	PalabrasReservTT[30][4] = 31;
	PalabrasReservTT[32][0] = 33;
	PalabrasReservTT[0][8] = 32;
	PalabrasReservTT[0][11] = 14;
	PalabrasReservTT[0][13] = 20;
	PalabrasReservTT[0][14] = 19;
	PalabrasReservTT[7][8] = 8;
	PalabrasReservTT[8][9] = 9;
	PalabrasReservTT[9][8] = 10;
	PalabrasReservTT[10][10] = 11;
	PalabrasReservTT[12][8] = 13;
	PalabrasReservTT[16][9] = 17;
	PalabrasReservTT[14][12] = 15;
	PalabrasReservTT[15][13] = 16;
	PalabrasReservTT[28][14] = 29;
	PalabrasReservTT[33][15] = 34;
	
	PalabrasReservEstadosFinales[0]=6;
	PalabrasReservEstadosFinales[1]=13;
	PalabrasReservEstadosFinales[2]=18;
	PalabrasReservEstadosFinales[3]=21;
	PalabrasReservEstadosFinales[4]=27;
	PalabrasReservEstadosFinales[5]=31;
	PalabrasReservEstadosFinales[6]=33;
	
		
	//------LLENANDO PUNTUACION---------
	for(i=0;i<7;i++)
		{ PuntuacionTT[0][i] = 1;
		PuntuacionTT[1][i] = 2;
		PuntuacionTT[2][i] = 2;}
	
	PuntuacionEstadosFinales[0]=1;
	
	


	
	
	IdEstadosFinales[0]=2;
	char cadena[10];
	cout<<"ingresar cadena: ";
	cin>>cadena;
	//scanf("ingresar cadena: %s \n", cadena);
	while(cadena[0]!='0')
	{
	printf(" cadena: %s\n\n", cadena);
	printf("valor del automata para identificador: %d \n",automata(IdTT,IdEstadosFinales, IdAlfabeto, cadena));
	printf("valor del automata para constantes: %d \n",automata(ConsTT,ConsEstadosFinales, ConsAlfabeto, cadena));
	printf("valor del automata para palabras reservadas: %d \n", automata(PalabrasReservTT, PalabrasReservEstadosFinales, PalabrasReservAlfabeto, cadena));
	printf("valor del automata para puntuacionr: %d \n",automata(PuntuacionTT,PuntuacionEstadosFinales, PuntuacionAlfabeto, cadena));
	printf("valor del automata para operadores: %d \n",automata(OpTT,OpEstadosFinales, OpAlfabeto, cadena));
	printf("valor del automata para cedenas literales: %d \n",automata(IdTT,IdEstadosFinales, IdAlfabeto, cadena));
	
	//scanf("ingresar cadena: %s \n", &cadena);
	cout<<"ingresar cadena: ";
	cin>>cadena;}
	
	return 0;
}

int automata(int TT[][62],int estadosFinales[],char alfabeto[], char cadena[]){
	int i=0, j=0, estadoActual=0, resultado=1;
	int bandera=0;
	while (cadena[i]!= '\0'){
		j=0;
		while((cadena[i] != alfabeto[j] )&& alfabeto[j] != '\0'){
			j++;
		}
	
		if(alfabeto[j]==cadena[i]){
		estadoActual = TT[estadoActual][j];
		}
		else {
		resultado=0;
		break;
		}
		i++;
		
	}
	if(resultado==1){
	for(int k=0; k<7;k++){
		if(estadoActual == estadosFinales[k]){
			bandera=1;
		}
	}
	resultado=bandera;}
	
	
	return resultado;
}



