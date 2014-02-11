// Arrange the _main_ function of problem number 07 to accept a variable number of arguments.


#include <stdio.h>
#include <stdlib.h>

double add(double numeros[], double numero_de_numeros){

    double resultado=0;
// Se suma todo en la variable resultado y se va acumulando
    for(int contador=0; contador < numero_de_numeros ; contador++)

	resultado += numeros[contador]; 
    return resultado;
}

int main(int argc, char *argv[]){

    //argc-1 para introducir tantos numeros como se quiera.
    double numeros[argc-1],
	   numero_de_numeros = argc-1,
	   resultado=0;

    // Se meten todos los datos en una matriz.
    for(int contador=0; contador < numero_de_numeros ; contador++){
	numeros[contador] = atof(argv[contador+1]);

    }
    //Llamada a la funcion.
    resultado = add(numeros, numero_de_numeros);
    printf(" %.2lf \n", resultado); 

    return EXIT_SUCCESS;
}
