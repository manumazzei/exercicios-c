#include "stdio.h"

void main(){
int a[]={3,5,1,8,9,13,7,18,25,2};
int contador,contador1,contador2,aux;
//esse for

for(contador1=0;contador1<10;contador1++){
    for(contador2=contador1;contador2<10;contador++){
        if(a[contador1]>a[contador2]){
            aux = a[contador1];
            a[contador1]=a[contador2];
            a[contador2]=aux;
        }
    }
}

for(contador=0;contador<10;contador++){
    printf("%d ",a[contador]);
}
}
