# include <stdio.h>
# include <math.h>
# define  PI  3.14159
int  main ()
{
int r;
float l, a;
printf("Introducir radio (entero): ");
scanf("% d", &r);
l = 2*PI*r;
printf(" La longitud de la circunferencia vale %0.3f \n", l);
printf("\tPotencia\n ", l);
a = PI * pow(r,2);
printf(" El área del círculo vale %0.3f \n ", a);
}
