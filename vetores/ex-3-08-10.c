#include "stdio.h"
#include "time.h"
#include "math.h"
#include "locale.h"

void main(){
    setlocale(LC_ALL, "Portuguese");

    int numero,cont,cont1,status;
    int vetor[6];
    srand(time(NULL));


    for(cont=0;cont<6;cont++){

        numero = (rand()%60)+1;
        status=0;
        for(cont1=0;cont1<=cont;cont1++){

            if(numero==vetor[cont1]){
                status=1;
                break;
            }
        }
        //printf("\nNúmero gerado: %d",numero);
        if(status==1){
            printf("\nNumero repetido %d, não será colocado no vetor",numero);
            cont--;
            continue;
        }else{
            vetor[cont]=numero;
        }
        printf("\n%d",vetor[cont]);
    }


}
