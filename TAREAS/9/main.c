#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
	int a;
	int suma=0;
	//definimos las variables 
	a=atoi(argv[1]);
	//hacemos que la funciòn se repita hasta llegar al ultimo nùmero 
	while(a>0){
		suma= suma+a%10;
		a=a/10;
		//empezamos a sumar los nùmeros anteriores para sacar el resultado 
	}
	printf("%i\n", suma);
	return 0;
}