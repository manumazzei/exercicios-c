#include "stdio.h"

void main(){
int a,b,c,x;
float y;

printf("Digite um número:");
scanf("%d",&a);
printf("Digite um número:");
scanf("%d",&b);
printf("Digite um número:");
scanf("%d",&c);
printf("Digite um número:");
scanf("%d",&x);

    for (x = -10; x <= 10; x++) {
        y=funcaoquadrada(a, b, c, x);
        printf("Para x = %d, y = %.2lf\n", x, y);
    }
}

void funcaoquadrada(int a,int b,int c,int x){
float y;
y=(a*x*x)+(b*x)+c;
return(y);
}
