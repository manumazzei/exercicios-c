#include "stdio.h"

void main(){
int a,b,c,d;

printf("Digite A:");
scanf("%d",&a);
printf("Digite B:");
scanf("%d",&b);
printf("Digite C:");
scanf("%d",&c);
printf("Digite D:");
scanf("%d",&d);

rotacionarvalores(&a, &b, &c, &d);
printf("A = %d, B = %d, C = %d, D = %d\n", a, b, c, d);
}

int rotacionarvalores(int *a, int *b, int *c, int *d){
int aux= *d;
*d = *c;
*c = *b;
*b = *a;
*a = aux;

return;

}
