#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[]){
	double a;
	double b;
	double c;
	double d;
	double e;
	double f;
	double n;
	double m;
	double x1;
	double x2;
	double a1;
	double b1;
	//definimos nuestras variables
	a=atof(argv[1]);
	b=atof(argv[2]);
	c=atof(argv[3]);
	//ponemos como se gurdaran nuetras varibles
	if(a!=0){
		d=2*a;
		e=(b*b)-(4*a*c);
		//definimos las operaciones que vamos a ocupar, para que despues no tengamos que anotar todo
		if(e>=0){ 
			//preguntamos si es mayor a cero para hacer las actividades
			f=sqrt(e);
			x1=(b+f)/d;
			x2=(b-f)/d;
			//damos la formula de las dos posibles soluciones 
			if(x1==x2){
				printf("%lf\n",x1);
				//si las dos son iguales solo ponemos que hay una solucion
			}
			else{
				printf("%lf\n",x1);
				printf("%lf\n",x2);
				//hacemos que nos imprima los resulados de ser solamente esa operacion 
			}
		}
		else{
			n=(4*a*c)-(b*b);
			m=sqrt(n);
			a1=m/d;
			b1=b/d;
			//ponemos la condicion de si no se puede dar para que se acepten numeros imaginarios
			printf("%lf+%lfi\n", b1,a1);
			printf("%lf-%lfi\n",b1,a1);
			//imprimimos los resultados
		}
	}
	return 0;
}
	
