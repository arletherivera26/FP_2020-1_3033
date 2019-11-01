#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argu[]){
	int igual;
	int list[argc];
	//lista en donde se guarden los valores
	for(int i=1; i<argc; i++){
		//primer resultado
    igual=1;
    for(int j=1; j<argc; j++){
    	//se guaran los datos en list
    	list[j]=atoi(argu[j]);
    	igual= igual*list[j];
    	//se van exluyendo una a uno dependiendo del orden
    }
    igual=igual/list[i];
    printf("%i\n", igual);
	}
	return 0;
}