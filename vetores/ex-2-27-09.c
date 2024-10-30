#include "stdio.h"

void main(){
int a[]={3,5,1,8,9,13,7,18,25,2};
int contador,aux1,aux2;
aux1=a[0];
aux2=a[0];

for(contador=0;contador<10;contador++){
    if(aux1<a[contador]){
        aux1=a[contador];
    }
    if(aux2>a[contador]){
        aux2=a[contador];
    }
}
printf("%d",aux1);
printf("\n%d",aux2);
}
