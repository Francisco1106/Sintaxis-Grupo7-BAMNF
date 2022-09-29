#include <stdio.h>
#include <assert.h>
#include "Conversion.c"
#include "Conversion.h"

//toFahrenheit(double C)
//toCelcius(double Fa)

int test(void){
    double c1,c2,c3=0,c4=0,f1=0,f2=0,f3,f4;

////////////////////// test toFar

    c1 = 0;
    f1 = toFahrenheit(c1);
    assert (f1 == 32);
    printf("0 c a f es: %d\n", f1);

    c2 = 60;
    f2 = toFahrenheit(c2);
    assert(f2 == 140);
    printf("60 c a f es:%d\n", f2);

/////////////////// test toCelcius

    
    f3 = 50;
    c3 = toCelcius(f3);
    assert(c3 == 10);
    printf("50 f a c es: %d\n", c3);

    f3 = 14;
    c3 = toCelcius(f3);
    assert(c4 == -10);
    printf("14 f a c es: %d\n", c4);

    return 0;
}