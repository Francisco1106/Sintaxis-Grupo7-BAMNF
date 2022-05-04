#include <stdio.h>
#include "puntoA.c"
#include "puntoB.c"
#include "puntoC.c"
#include "puntoD.c"
#include "puntoE.c"
#include "puntoF.c"

int main(){
    char string[]= "Esto es un string";
    int valor = length(string);
    printf("El tamaño es: %d de el estring (%s) \n", valor,string);

    char string2[] = "123456";
    valor = deArraAValor(string2);
    printf("El numero es: %d de el estring (%s)\n", valor,string);

    toMayus(string);
    printf("Este es el estring en mayus (%s) del anterior estring\n",string);

    char valorQuitado = 'E';
    eliminar(string,valorQuitado);
    printf("Este es el estring sin el valor E: (%s) del anterior estring\n",string);

    char stringA[] = "valorA";
    char stringB[] = "valorB";
    char stringConcatenado[50];
    concatenar(stringA,stringB,stringConcatenado);
    printf("Este string %s + este %s es este %s\n",stringA,stringB,stringConcatenado);


    agregarCaracter(string, 'a', 0);
    printf("agregando el caracter a en la pocicion 1 de la string anterior : %s",string);
}