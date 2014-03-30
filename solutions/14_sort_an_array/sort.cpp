// Sort an array of integers.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){

    int a[] = {22, 3, 77, 50, 40, 23, 37, 35, 22, 2, 61, 71, 0};

    int auxiliar; 

    int comparar = 0;

    int numero_numeros = sizeof(a) / sizeof( int *); // Se calcula el numero de numeros que hay en el array.

    for(int contador = 0; contador < numero_numeros; contador++){ 
	for(int siguiente = contador+1; siguiente < numero_numeros; siguiente++)

	    if(a[contador] > a[siguiente]){
		auxiliar = a[contador]; // Se necesita una auxiliar para no sobreescribir los datos.
		a[contador] = a[siguiente]; // Lo movemos de sitio para asi ordenarlo.
		a[siguiente] = auxiliar; 
	    }
    }

    for(int i=0; i < numero_numeros; i++)
	printf("%i ", a[i]); // Se imprime la matriz en pantalla con los numeros ordenados.

    printf("\n");

    return EXIT_SUCCESS;
}
