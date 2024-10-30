#include "stdio.h"
#include "locale.h"
#include "time.h"

void main(){
    setlocale(LC_ALL,"Portuguese");

    int numero,cont,cont1,status,cont2,aux,cont3;
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
                cont--;
                continue;
            } else{
                vetor[cont]=numero;
            }


    }
                    for(cont2=0;cont2<25;cont2++){
                for(cont3=cont2;cont3<25;cont3++){
                        if(vetor[cont2]>vetor[cont3]){
                            aux=vetor[cont2];
                            vetor[cont2]=vetor[cont3];
                            vetor[cont3]=aux;
                        }
                }
                }
                    for (cont = 0; cont < 25; cont++) {
                printf("\n Números gerados: %d ", vetor[cont]);

    }

}
