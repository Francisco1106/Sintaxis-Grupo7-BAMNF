#include <stdio.h>
#include "conversion.h"
#include "conversionTest.c"

void tablaFToC(){
    
    double fahr, celsius;
    double lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower; 
    while(fahr<=upper){

        celsius = toCelcius(fahr);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr += step;
    } 

}

void tablaCToF(){
    double fahr, celsius;
    double lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    
    celsius = lower;
    while(celsius<=upper){

        fahr = toFahrenheit(celsius);
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius += step;
    }

}


int main(){

    tablaCToF();
    tablaFToC();
    test();

    return 0;
}