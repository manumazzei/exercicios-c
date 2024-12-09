#include "stdio.h"

void main(){
   int numero;
   int fatorial;
   printf("Informe Numero:");
   scanf("%d",&numero);
   fatorial = calcfatorial(numero);
   printf("\n%d",fatorial);
}

int calcfatorial(int n){
    int x;
    if(n==1){
       printf("\nValor de N:%d",n);
       return(1);
    }else{
      printf("\nValor de N:%d",n);
      x = n*calcfatorial(n-1);
      printf("\nValor de X:%d",x);
      return(x);
    }
}
