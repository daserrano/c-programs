#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int *puntero = NULL,
	cantidad = 0,
	suma = 0;
    
    printf("Numero de elementos: ");
    scanf(" %i", &cantidad);

    puntero = (int *)malloc(cantidad * sizeof( int *));

    for(int i=0; i<cantidad; i++){
	printf("Introduce un numero: ");
	scanf(" %i", puntero+i);
	suma += *(puntero+i);
    }

    printf("Suma = %i \n", suma);
    free(puntero);

    return EXIT_SUCCESS;
}
