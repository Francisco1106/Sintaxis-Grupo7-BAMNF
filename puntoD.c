#include <stdio.h>

void eliminar(char[], char);

/*
int main(){
    char var[40]="hooolaaooa";
    char var1 = 'o';
    eliminar(var, var1);
    printf(" %s ", var);


    system("pause");
    return 0;
}
*/
void eliminar(char cadena[], char caracter)
{
int i, j;

for(i=0; cadena[i] != '\0' ; i++)
{
    if(cadena[i] == caracter)
        { for(j=i; cadena[j]!= '\0'; j++)
            {*(cadena+j)= *(cadena+j+1);}
        i--; }
}
return;
}