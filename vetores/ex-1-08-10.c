#include "stdio.h"
#include "time.h"
#include "math.h"
#include "locale.h"

void main(){

    int cont,elemento;
    int vetor[10];

    for(cont=0;cont<=9;cont++){
        printf("Digite um número: ");
        scanf("%d",&vetor[cont]);
    }

    for(cont=0;cont<=9;cont++){
        printf("%d", vetor[cont]);

    }

}
