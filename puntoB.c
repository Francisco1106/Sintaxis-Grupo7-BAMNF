#include <stdio.h>
int deArraAValor(char*);

/*
int main(){
   printf("%d",deArraAValor("22a555"));

}
*/
int deArraAValor(char* string){
   int total = 0;
   while(*string){
      int a = *string;
   if(a < 48 && a > 57){
      printf("valor no permitido");
      return 0;
   }
   string += 1;
   total = total*10 + (a - 48);
   }
   return total;
}
