#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){

    const char *list[] = {"yield", "yelp", "yiep", "yellow"};

    int numero_palabras = 0, comparacion = 0;
    const char *temporal;

    numero_palabras = sizeof(list) / sizeof(char *);
    //printf("%i \n", numero_palabras);

    for(int posicion=0; posicion < numero_palabras ; posicion++)
	for(int compara = posicion+1; compara < numero_palabras; compara++){
	    comparacion = strcmp(list[posicion], list[compara]); // Comparacion de dos palabras. Con los dos FOR compara todas las palabras con todas.

	    if(comparacion > 0){ // Si la segunda palabra va ordenada antes

		temporal = list[posicion]; // Con una variable temporal se guarda la palabra que hay en posicion.
		list[posicion] = list[compara]; // La de posicion en compara.
		list[compara] = temporal; // y la de compara en temporal.

	    }
	}

	    for(int posicion=0; posicion < numero_palabras; posicion++) // Recorre la matriz ya ordenada.
		printf("%s \n", list[posicion]);
	    //printf(" %s %s = %i \n", list[posicion], list[compara], comparacion);

	

    return EXIT_SUCCESS;
}

