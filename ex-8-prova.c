#include "stdio.h"

void main(){
    int dia,hora,minuto,segundo,tempoemsegundos;
    printf("Informe o Tempo em Segundos:");
    scanf("%d",&tempoemsegundos);
    convertesegundos(tempoemsegundos,&dia,&hora,&minuto,&segundo);
     printf("%02d dias, %02d:%02d:%02d\n", dia, hora, minuto, segundo);
}

void convertesegundos(int tempoemsegundos,int *dia,int *hora,int *minuto,int *segundo){
    *dia = tempoemsegundos / 86400;  // 86400 segundos em um dia
    tempoemsegundos = tempoemsegundos % 86400;  // Resto após calcular os dias

    *hora = tempoemsegundos / 3600;  // 3600 segundos em uma hora
    tempoemsegundos = tempoemsegundos % 3600;  // Resto após calcular as horas

    *minuto = tempoemsegundos / 60;  // 60 segundos em um minuto
    *segundo = tempoemsegundos % 60; // Resto é o número de segundos restantes
    return;
}
