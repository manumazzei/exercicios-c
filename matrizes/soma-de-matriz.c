#include "stdio.h"
#include "locale.h"

void main(){
setlocale(LC_ALL,"Portuguese");
int matriz1[4][4]={{1,1,1,1},
                    {1,1,1,1},
                    {1,1,1,1},
                    {1,1,1,1}};
int matriz2[4][4]={{1,1,1,1},
                    {1,1,1,1},
                    {1,1,1,1},
                    {1,1,1,1},};
int matrizsoma[4][4];
int linha,coluna;

for(linha=0;linha<4;linha++){
    for(coluna=0;coluna<4;coluna++){
        matrizsoma[linha][coluna]=matriz1[linha][coluna]+matriz2[linha][coluna];
    }
}

for(linha=0;linha<4;linha++){
    for(coluna=0;coluna<4;coluna++){
       printf("\t %02d",matrizsoma[linha][coluna]);

}
printf("\n");
    }

}
