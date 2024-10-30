#include "stdio.h"

void main(){
int a[]={3,5,1,8,9,13,7,18,25,2};
int contador,aux1,aux2,soma,media,quais;
aux1=a[0];
aux2=a[0];
soma=0;
quais=0;

for(contador=0;contador<10;contador++){
    if(aux1<a[contador]){
        aux1=a[contador];
    }
    if(aux2>a[contador]){
        aux2=a[contador];
    }

soma=soma+a[contador];
media=soma/10;
}
printf("%d",aux1);
printf("\n%d",aux2);
printf("\n%d",soma);
printf("\n%d",media);

for(contador=0;contador<10;contador++){
    if(a[contador]>media){
        printf("\n%d",a[contador]);
        quais=quais+1;
    }

}
    printf("\n%d",quais);
}
