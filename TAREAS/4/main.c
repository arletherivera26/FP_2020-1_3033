#include <stdio.h>
#include <stdlib.h>
int main (int argc, char *argu[]){
	double a=0;
	for (int i=0; i<argc; i++){
		double b=atof(argu[i]);
		a=b+a;

	}
	double promedio= a/(argc-1);
	printf("%.2lf\n", promedio);
	return 0;
}