//Given the height, build a triangle as in the example with the character provided in the invocation.


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    // Si no se introduce un numero, que muestre por pantalla un error.
    if(argc<2){
	fprintf(stderr, "Please, introduce a caracter.\n");
	exit (EXIT_FAILURE);
    }

    // Se indica que la variable numero tendra el valor del triangulo.
    int numero = 4;
    

    // Se crea una matriz de 2x2
    for(int fila=0; fila < numero ; fila++){
	for(int columna=0; columna < numero; columna++){
	    // Si la fila es mayor o igual que la columna pintamos asteriscos, si no, no
	    if(fila>= columna)
		printf("%c", *argv[1]);
	    else 
		printf(" ");

	}
	printf("\n");
    }

    EXIT_SUCCESS;
}
