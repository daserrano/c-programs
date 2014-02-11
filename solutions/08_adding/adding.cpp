// Arrange the _main_ function of problem number 07 to accept a variable number of arguments.


#include <stdio.h>
#include <stdlib.h>

double add(double numeros[], double numero_de_numeros){

    double resultado=0;

    for(int contador=0; contador < numero_de_numeros ; contador++)

	resultado += numeros[contador]; 
    return resultado;
}

int main(int argc, char *argv[]){

    double numeros[argc-1],
	   numero_de_numeros = argc-1,
	   resultado=0;

    for(int contador=0; contador < numero_de_numeros ; contador++){
	numeros[contador] = atof(argv[contador+1]);

    }
    resultado = add(numeros, numero_de_numeros);
    printf(" %.2lf \n", resultado); 

    return EXIT_SUCCESS;
}
