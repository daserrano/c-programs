/* Hacer un programa que sume dos numeros y muestre el resultado dependiendo del lenguaje que quiera el usuario. */


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>

#define N 2


double suma(int numeros[N]){
    return numeros[1] + numeros[2];
}

int main(int argc, char *argv[]){

    int c,
	numeros[N];

    char *idioma;
    while((c = getopt (argc, argv, "l:")) != -1)

	switch(c){
	    case 'l':
		idioma = optarg;
		printf("%s\n", idioma);
		if( idioma == "esp"){
		    printf("Introduzca numero: ");
		    scanf(" %d", &numeros[1]);
		    printf("Introduzca numero: ");
		    scanf(" %d", &numeros[2]);
		    printf("\n %d + %d = %.2lf \n", numeros[1], numeros[2], suma(numeros));
		}
		else
		    return EXIT_SUCCESS;



	}






    return EXIT_SUCCESS;
}
