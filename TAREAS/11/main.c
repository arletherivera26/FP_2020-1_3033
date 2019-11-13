#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//definimos el nombre de las variables que vamos a utilizar
double raiz(double x, double tolerancia, double candidato){
	double promedio;
	double division;
	//definimos nombres uqe van a tener una operacion en especifico
	while(fabs(division-candidato)>tolerancia){
		division=x/candidato;
		promedio=(division+candidato)/2;
	    candidato=promedio;
	    //definimos nuestras operaciones para que nos pueda salir la raiz haciendo que el candidato sea los mas cercano al promedio
	    //y asi serciorarnos de que el candidato sea igual al del promedio
	}
	long double resultado=candidato;
	return resultado;
	//si nuestro resultado es igual al del candidato nos vamos a decir que ese es el rsultado
	//lo vamos a poner para que corra el programa 
}
int main(int arg, char *argv[]){
	//definimos en donde se van a guardar nuestras variables, ya que recimoms tres hay que ponerle nombre y el argumento a las tres 
	double a=atof(argv[1]);
	double b=atof(argv[2]);
	double c=atof(argv[3]);
	printf("%lf\n", raiz(a,b,c));
	//hacemos que imprima el resulado 
	return 0;
}