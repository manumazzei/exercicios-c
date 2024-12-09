#include "stdio.h"

void main(){
int numeroprimo,x;
printf("Informe Numero para verificar se é primo:");
scanf("%d",&numeroprimo);

x=verificanumeroprimo(numeroprimo);
if(x==1){
    printf("Número primo");
}else{
    printf("Número não é primo");
}

}

int verificanumeroprimo(int n){
    int contador;
    int status=0;
    for(contador=2;contador<=n-1;contador++)
    {
        if(n%contador==0)
        {
            status = 1;
            break;
        }
    }
    if(status== 1)
    {
        // se não for numero primo retorna 0
        return(0);
    }
    else
    {
        // se for numero primo retorna 1
        return(1);
    }
}
