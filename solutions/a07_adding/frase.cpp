/* Hacer un programa que sume dos numeros y muestre el resultado dependiendo del lenguaje que quiera el usuario. */


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
#include <string.h>

#define N 2

void error(char *argv[0]){
    fprintf(stderr, "Language ENG or ESP. Example: %s -l ENG \n", argv[0]);
    exit(EXIT_FAILURE);
}

double suma(int numeros[N]){
    return numeros[1] + numeros[2];
}

int main(int argc, char *argv[]){

    int c,
	numeros[N],
	index;

    char *idioma = NULL;
    opterr = 0;
    while((c = getopt (argc, argv, "l:")) != -1)

	switch(c){
	    case 'l':
		idioma = optarg;
		if( strcmp(idioma, "ESP") == 0){
		    printf("Introduzca numero: ");
		    scanf(" %d", &numeros[1]);
		    printf("Introduzca numero: ");
		    scanf(" %d", &numeros[2]);
		    printf("\n El resultado de %d + %d = %.2lf \n\n", numeros[1], numeros[2], suma(numeros));
		}
		else if( strcmp(idioma, "ENG") == 0){
		    printf("Introduce a number: ");
		    scanf(" %d", &numeros[1]);
		    printf("Introduce a number: ");
		    scanf(" %d", &numeros[2]);
		    printf("\n The result of %d + %d = %.2lf \n\n", numeros[1], numeros[2], suma(numeros));
		}

		else 
		    error(argv);

		break;
	    case '?':
		if(optopt == 'l')
		    fprintf(stderr, "Option -%c requires an argument.\n", optopt);

		else
		    if(isprint(optopt))
			fprintf(stderr, "Unknown option `-%c'.\n", optopt);
		    else
			fprintf(stderr, "Unkown option character `\\x%x'.\n", optopt);

		return EXIT_FAILURE;
	    default:
		abort ();
	}

    for (index = optind; index < argc; index++)
	printf ("Non-option argument %s\n", argv[index]);
    return EXIT_SUCCESS;

}
