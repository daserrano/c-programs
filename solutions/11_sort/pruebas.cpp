#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){

    int compara=0;
    const  char *nombre1= "abecedario", *nombre2="ba";


    compara = strcmp(nombre1, nombre2);

    if(compara==0)
	printf("Son iguales \n");
    else{
	if(compara > 0)
	    printf("%s %s \n", nombre2, nombre1);
	else
	    printf("%s %s \n", nombre1, nombre2);
    }
    return EXIT_SUCCESS;
}
