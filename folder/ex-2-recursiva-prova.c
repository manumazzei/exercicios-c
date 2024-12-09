#include "stdio.h"

void main(){
int base, expoente;
printf("Digite a base:");
scanf("%d", &base);
printf("Digite o expoente:");
scanf("%d", &expoente);
printf("%d^%d = %d\n", base, expoente, potencia(base, expoente));
}

int potencia(int base,int expoente){
    int x;
    if(expoente==0){
        return(1);
    }else{
        x= base*potencia(base,expoente -1);
        return(x);
    }
}
