#include <stdio.h>
#include <ctype.h>
#include <string.h>

//c) Convertir una cadena de caracteres a la misma cadena con todos sus caracteres en
//mayuscula.



void toMayus(char* cadena)
{
    int i=0;

    while(*(cadena+i) !='\0')
    {
        //if(minuscula) // sumar 32 al asc o directamente cambiar a mayuscula con switch
        if(*(cadena+i) >= 97 && *(cadena+i) <= 122)
        {
          *(cadena+i) = *(cadena+i) - 32;
        }

       i++;
    }
}

    /*

    char temp[] = *cadena;
    int i=0;
    while(temp[i] != '\0')
    {
        //if(minuscula) // sumar 32 al asc o directamente cambiar a mayuscula con switch
        if(temp[i] >= 97 && temp[i] <= 122)
        {
          temp[i] = temp[i] - 32;
        }

        i++;
    }
    cadena = &temp[0];


}
*/
