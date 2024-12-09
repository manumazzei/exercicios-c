#include "stdio.h"
#include "math.h"

void main(){
int a,b,c;

printf("Digite a:");
scanf("%d",&a);
printf("Digite b:");
scanf("%d",&b);
printf("Digite c:");
scanf("%d",&c);
baskara(a,b,c);
}

void baskara(int a,int b,int c){
int delta,x1,x2;

delta=b*b-4*a*c;

x1 = (-b + sqrt(delta)) / (2 * a);
x2 = (-b - sqrt(delta)) / (2 * a);
printf("delta= %d x1= %d x2= %d",delta,x1,x2);

return;
}
