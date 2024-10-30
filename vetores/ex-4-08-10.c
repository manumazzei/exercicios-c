#include "stdio.h"
#include "locale.h"
#include "time.h"

void main(){
    setlocale(LC_ALL,"Portuguese");

    int numero,cont,cont1,status;
    int vetor[25];
    srand(time(NULL));

    for(cont=0;cont<25;cont++){

        numero = rand()%75;
        status=0;

        for(cont1=0;cont1<=cont;cont1++){

            if(numero==vetor[cont1]){
                status=1;
                break;
            }
        }

        if(status==1){
           // printf("\nNumero repetido %d, nao sera contabilizado",numero);
            cont--;
            continue;
        } else{
            vetor[cont]=numero;
        }
            printf("\n%d",vetor[cont]);
    }

}
