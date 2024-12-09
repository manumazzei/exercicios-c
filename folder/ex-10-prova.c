#include "stdio.h"

void main(){
int num1, num2, resultado;
char sinal;

printf("Digite um número:");
scanf("%d",&num1);
printf("Digite outro número:");
scanf("%d",&num2);
printf("Digite a operação: ");
scanf(" %c", &sinal);


switch(sinal){
    case '+':
        soma(&num1, &num2, &resultado);
        break;
    case '-':
        subtracao(&num1, &num2, &resultado);
        break;
    case '*':
        multiplicacao(&num1, &num2, &resultado);
        break;
    case '/':
        divisao(&num1,&num2,&resultado);
        break;
    default:
        printf("Operador inválido. Use +, -, *, ou /.\n");
        break;
}

printf("Resultado: %d",resultado);

}

int soma(int *a, int *b, int *resultado){
*resultado= *a + *b;
}

int subtracao(int *a, int *b, int *resultado){
*resultado= *a - *b;
}

int multiplicacao(int *a, int *b, int *resultado){
*resultado= *a * *b;
}

int divisao(int *a, int *b, int *resultado){
*resultado= *a / *b;
}
