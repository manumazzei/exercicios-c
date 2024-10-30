#include "stdio.h"

void main(){
int a[]={3,5,1,8,9,13,7,18,25,2};
int contador,aux;
aux=a[0];

for(contador=0;contador<10;contador++){
    if(aux<a[contador]){
        aux=a[contador];
    }
}
printf("%d",aux);
}
