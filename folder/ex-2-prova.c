#include "stdio.h"

void main(){
int a,b,c,x;

//printf("Digite um numero inteiro: ");
//scanf("&d",a);
//system('cls');
//printf("Digite o segundo numero inteiro: ");
//scanf("&d",b);
//printf("Digite o terceiro numero inteiro: ");
//scanf("&d",c);
a=10;
b=6;
c=2;

x=vermaior(a,b,c);
printf("\n Maior Numero:%d",x);
}

int vermaior(int a,int b,int c){
    if(a>b && a>c)
    {
        return(a);
    } else
    if(b>a && b>c)
    {
        return(b);
    } else{
    return(c);
    }


}
