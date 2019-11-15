#include <stdio.h>
#include <stdlib.h>
//el ciclo burbuja es el algoritmo más sencillo probablemente. Ideal para empezar. Consiste en ciclar repetidamente a través de la lista, comparando elementos adyacentes de dos en dos. Si un elemento es mayor que el que está en la siguiente posición se intercambian
void imprimir (int x[], int y);
void intercambio(int *a,int *b);
void ordenar(int c[], int d);
//son las variables que vamos a ocupar
int main(int argc, char *argv[]){
	int n[argc-1];
	for(int i=0; i<argc; i++){
		n[i]=atoi(argv[i]);
	}
	//guardamos los argumentos que vamos a recibir 
	ordenar(n,argc);
	imprimir(n, argc);
	return 0;
} //imprimimos nuestros resultados de mayor a menor y lo imprimimos
void imprimir(int x[], int y){
	for(int i=1; i<y; i++){
		printf("%i\n", x[i]);
	}
}
void intercambio(int *a,int *b){
	int aux;
	aux= *a;
	 *a=*b;
	 *b=aux;
} //tenemos que ocupar tres variables para hacer un tercambio y ver cual es la más grande o más chica
void ordenar(int x[], int y){
	for(int i=y-1; i>0; i--){
		for(int j=0; j<i; j++){
			if(x[j]>x[j+1]){
				intercambio(&x[j], &x[j+i]);
				//ordenamos nuestros dtos para qe salgan de mayor a menos y no los imprima en una lista 
			}
		}
	}
}