// Write a program that outputs the border of a square, given the height 


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

// Se crea una variable con el valor que se introduce a la llamada del programa.
    int lado = atoi(argv[1]);

// Se crea un array bidimensional para crear el cuadrado, y se indica el tamaño con la variable anterior.
    for(int fila=0; fila < lado; fila++){
	for(int columna=0; columna < lado; columna++){

/* Fila == 0 para pintar la fila de arriba
   Columna == 0 para la columna de la izquierda
   Fila == lado-1 para la ultima fila
   Columna == lado-1 para la columna de la derecha.
*/ 
	    if(fila==0 || columna==0 || fila == lado-1 || columna == lado-1)
		printf("*");
// Si no se cumple ninguna sentencia de las de arriba, se pinta un espacio en blanco.
	    else
		printf(" ");
	}
	printf("\n");
    }

    return EXIT_SUCCESS;
}
