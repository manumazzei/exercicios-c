#include "stdio.h"

void main(){
int matriz[4][10];
int linha, coluna;

for(linha=0;linha<4;linha++){
    for(coluna=0;coluna<4;coluna++){
        matriz[linha][coluna]=linha;
    }
}

//mostrar dados da matriz
for(linha=0;linha<4;linha++){
    for(coluna=0;coluna<4;coluna++){
    printf("\t%02d",matriz[linha][coluna]);
}
printf("\n");
}


}
