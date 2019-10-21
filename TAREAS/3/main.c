#include <stdio.h>
#include <stdlib.h>
int main (int argc, char *argu[]){
	float a, b, suma, resta, multiplicacion, division;
	a=atof(argu[1]);
	b=atof(argu[2]);
	suma=a+b;
	resta=a-b;
	multiplicacion=a*b;
	division=a/b;
	printf("%.2f\n", suma);
	printf("%.2f\n", resta);
	printf("%.2f\n", multiplicacion);
	printf("%.2f\n", division);
	return 0;
}