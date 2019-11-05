#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argu[]){
	//definimos las variables
	float x; 
	float y;
	float z;
	//declaramos en donde vamos a guardar las variables
x=atof(argu[1]);
y=atof(argu[2]);
//decimos que si es igual a uno hay que cambiarlo a C°
if (x==1){
	z=(y*1.8)+32;
	printf("%.2f\n", z);
	return 0;
}
else 
	//decimos que si es igual a 0 lo cambiamos a F°
	if (x==0){
        z=(y-32)/1.8;
        printf("%.2f\n", z);
        return 0;
}
return 0;
} 

