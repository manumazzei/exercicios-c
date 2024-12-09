#include "stdio.h"
#include "locale.h"

void main(){
setlocale(LC_ALL,"Portuguese");
int numeroprimo,x,retprimo;
int existem=0;

   for(numeroprimo = 1;numeroprimo <= 10000;numeroprimo++){
        existem=existem+1;

        retprimo = verificanumeroprimo(numeroprimo);
        if (retprimo == 1){
            printf("\n %d é primo ",numeroprimo);
        }
   }
printf("\nExistem %d números",existem);
}

int verificanumeroprimo(int n){
    int contador;
    int status=0;
    for(contador=2;contador<=n-1;contador++){
        if(n%contador==0)
        {
            status = 1;
            break;
        }
    }
    if(status== 1){
        return(0);
    }
    else{
        return(1);
    }
}
