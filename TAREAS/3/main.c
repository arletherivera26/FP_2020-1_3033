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
	printf("la suma es:%.2f\n", suma);
	printf("la resta es:%.2f\n", resta);
	printf("la multiplicacion es:%.2f\n", multiplicacion);
	printf("la division es:%.2f\n", division);
	return 0;
}