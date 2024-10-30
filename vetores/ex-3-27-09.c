#include "stdio.h"

void main(){
int a[]={3,5,1,8,9,13,7,18,25,2};
int contador,aux,soma;
aux=a[0];
soma=0;

for(contador=0;contador<10;contador++){
    if(soma<a[contador]){
        soma=soma+a[contador];
    }
}
printf("%d",soma);
}
