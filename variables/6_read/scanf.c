#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main()
{
int r;
float l,a,b,c;//Declaro variables
printf("Introduce radio (entero): ");
scanf("%d", &r);

printf("Dame el \'primer\' numero: ");
scanf("%d",&b);

printf("Dame el \'segundo\' numero: ");
scanf("%d",&c);

printf("Multiplicacion\n");
l=2*PI*r;
printf("\t%0.3f * %0.3f * %0.3f = %0.3f\n");

printf("\nPotencia?\n");
a=pow (PI*r,b);
printf("\t%0.3f * %0.3f elevado a la potencia / %0.3f es %0.3f\n", a, b);
}
