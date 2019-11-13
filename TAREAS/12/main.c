#include <stdio.h>
#include <stdlib.h>
//definimos a la variable a como si fueran las personas a saludar 
int personas(int a){
	if(a==0){ 
	return a;
	//si no hay personas no hay saludos que dar
}
int b=a;
//decimos que los salufos son igual que las personas y las vamos restando y sumando entre ellas
b=personas(a-1)+(b-1);
//hacemos como si fuera una suma de numeros naturales, para llegar a los saludos deseados
return b;
}
//lo ponemos a funcion 
int main(int argc, char *argv[]){
	int n=atoi(argv[1]);
	//hacemos que lo guarde en una variable la suma consecutiva
	printf("%d\n", personas(n));
	//imprime el resultado 
	return 0;
}
