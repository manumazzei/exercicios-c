#include "stdio.h"

void main(){
int num1, num2, total;
char sinal;

    printf("\nInforme número:");
    scanf("%d",&num1);
    printf("\nInforme outro número:");
    scanf("%d",&num2);
    printf("Informe sinal");
    scanf(" %c", &sinal);

    if(sinal=='+'){
        total=calcsoma(num1,num2);
    } else if(sinal=='-'){
        total=calcsubtracao(num1,num2);
    } else if(sinal=='*'){
        total=calcmultiplicacao(num1,num2);
    }else if(sinal=='/'){
        total=calcdivisao(num1,num2);
    }else{
        printf("Operação inválida");
    }
    printf("Resultado: %d", total);
}

int calcsoma(int num1,int num2)
{
    int w;
    w = num1+num2;
    return(w);
}

int calcsubtracao(int num1,int num2)
{
    int w;
    w = num1-num2;
    return(w);
}

int calcdivisao(int num1,int num2)
{
    int w;
    w = num1/num2;
    return(w);
}
int calcmultiplicacao(int num1,int num2)
{
    int w;
    w = num1*num2;
    return(w);
}
