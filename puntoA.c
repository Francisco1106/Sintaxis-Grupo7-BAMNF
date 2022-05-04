#include <stdio.h>
int length(char*);

/*
int main(){
    int valor;
    char string[]= "jejeje hola";
    valor = length(string);
    printf("resultado %d",valor);
}
*/
int length(char* string){
    int longitud = 0;
    while(*string){
        longitud += 1;
        string += 1;
    }
    return longitud;
} 
