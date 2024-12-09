#include "stdio.h"

void main(){
int a,b;
printf("Digite dois numeros para multiplicar: ");
scanf("%d %d", &a, &b);
printf("%d x %d = %d\n", a, b, multiplicacao(a, b));
}

int multiplicacao(int a,int b){
    int x;
    if(b==0){
        return(0);
    }else{
        x= a+multiplicacao(a,b-1);
        return(x);
    }
}
