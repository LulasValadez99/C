#include <stdio.h>
#include <stdlib.h>
#include <math.h>  
int main()
{
	int opcion;
	float a= 10;
	float b= 20;
	float c;
	printf("Elige una opci�n\n:");
	printf("\t 1.- Suma:\n");
	printf("\t 2.- Resta:\n");
	printf("\t 3.- Multiplicaci�n:\n");
	printf("\t 4.- Divisi�n:\n");
	printf("\t 5.- Potencia:\n");
	printf("\t 6.- Ra�z Cuadrada:\n");
	printf("\t 7.- Salir:\n");
	scanf("%d",&opcion);
	switch(opcion)
	{
	case 1: 
		c= a + b;
		printf("La suma es: %f", c);
		break;
	case 2: 
	    c= a - b;
		printf("La suma es: %f0.3", c);
		break;
	case 3: 
	    c= a * b;
		printf("La suma es: %f0.3", c);
		break;
	case 4: 
	    c= a / b;
		printf("La suma es: %f0.3", c);
		break;
	case 5: 
	    c= pow (a,b);
		printf("La suma es: %f0.3", c);
		break;
	case 6: 
	    c= sqrt (a/b);
		printf("La suma es: %f0.3", c);
		break;
	default:
		printf("No está puesta correctamente la unidad\n");
		exit(0);
	}
	printf("\nFin de Switch\n");
} 
