#include <stdio.h>

//d) Eliminar de una cadena dada todas las ocurrencias de un carácter dado
 
char * squeeze( char s1[], const char s2[] )
{
    if ( *s2 != '\0' )
    {
        size_t i = 0;
        size_t j = 0;

        do
        {
            size_t k = 0;
            while ( s2[k] != '\0' && s2[k] != s1[i] ) ++k;
            
            if ( s2[k] == '\0' )
            {
                if ( j != i ) s1[j] = s1[i];
                ++j;
            }
        } while ( s1[i++] != '\0' );
    }
    
    return s1;
}

int main(void) 
{
    char s1[] = "Hola Mundooooooooooooooooooooo"; 
    const char *s2 = "o";
    
    puts( s1 );
    puts( squeeze( s1, s2 ) );
    
    return 0;
}