#include <stdio.h>
#include "conversion.h"

void tablaFToC(){
    
    double fahr, celsius;
    double lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower; 
    while(fahr<=upper){

        fahr += step;
    } 

}