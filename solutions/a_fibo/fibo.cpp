#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 16

int main(int argc, char *argv[]){

    int numeros[N];

    numeros[0] = numeros[1] = 1;

    for(int fila = 2; fila < N; fila++)
	    numeros[fila] = numeros[fila-1] + numeros[fila-2] ;

    for(int fila = 0; fila < N; fila++)
	    printf("%i ", numeros[fila]);

    printf("\n");

	    return EXIT_SUCCESS;
}
