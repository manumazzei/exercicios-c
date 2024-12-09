#include "stdio.h"

void main(){
int num1, num2, resultado;
char sinal;

printf("Digite um n�mero:");
scanf("%d",&num1);
printf("Digite outro n�mero:");
scanf("%d",&num2);
printf("Digite a opera��o: ");
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
        printf("Operador inv�lido. Use +, -, *, ou /.\n");
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
