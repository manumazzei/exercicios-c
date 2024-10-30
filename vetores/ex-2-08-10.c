#include "stdio.h"
#include "time.h"
#include "math.h"
#include "locale.h"

void main(){
    setlocale(LC_ALL,"Portuguese");
    int cont,elemento,soma,media;
    int vetor[10];
    soma=0;

    for(cont=0;cont<10;cont++){
        printf("Informe o %dº numero: ",cont+1);
        scanf("%d",&vetor[cont]);

        soma=soma+vetor[cont];
        }

    printf("%d",soma);
    media=(float)soma/10;
    printf("%d",media);

}
