#include <stdio.h>
#include <stdlib.h>
//damos valores predeterminados
int valor(char n){
	int z;
	switch(n){
		case'J':
		z=10;
		break;
		case'Q':
		z=10;
		break;
		case'K':
		z=10;
		break;
		case'A':
		z=11;
		break;
		case'j':
		z=10;
		break;
		case'q':
		z=10;
		break;
        case'k':
		z=10;
		break;
		case'a':
		z=11;
		break;
	}
	return z;
}

int main(int argc, char *argu[]){
	int imprimir, rat;
	for(int i=1; i<argc; i++){
		//se recorre la lista
		rat=argu[i][0]=='J'||argu[i][0]=='j'||
		argu[i][0]=='Q'||argu[i][0]=='q'||argu[i][0]=='K'
		||argu[i][0]=='k'||argu[i][0]=='A'||argu[i][0]=='a';
		if (rat==1){
			//caracter a pedir=valor
			imprimir=valor(argu[i][0]);
		}
		else{
			imprimir=atoi(argu[i]);
		}
		printf("%i\n", imprimir);
	}
	return 0;
}