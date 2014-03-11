/*Print sorted. strcmp.

  ```c
  int main(...) {
  const char *list[] = { "yield", "yelp", "yellow"};
  ```
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){

    const char *list[] = { "yield", "yelp", "yellow", "constantino", "pato"};
    int cantidad_palabras=0, 
	comparador=0;
    const char *temporal;

    cantidad_palabras =(sizeof(list)/sizeof(char *)); //Cuenta el numero de palabras que hay en lista.

    for(int posicion=0; posicion < cantidad_palabras; posicion++)
	for(int siguiente_palabra = posicion+1; siguiente_palabra < cantidad_palabras; siguiente_palabra++){

	    comparador = strcmp(list[posicion], list[siguiente_palabra]); //Compara dos palabras.

	if(comparador > 0){
	    temporal = list[posicion];
	    list[posicion] = list[siguiente_palabra];
	    list[siguiente_palabra] = temporal;
	}

    }
    for(int imprimir=0; imprimir<cantidad_palabras; ++imprimir)
	printf("%s\n", list[imprimir]);


    return EXIT_SUCCESS;
}


