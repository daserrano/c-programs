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

    const char *list[] = { "yield", "yelp", "yellow"};
    int cantidad_palabras=0, 
	comparador=0;

    cantidad_palabras =(sizeof(list)/sizeof(char *)); //Cuenta el numero de palabras que hay en lista.

    for(int posicion=0; posicion < cantidad_palabras; posicion++){
	for(int siguiente_palabra = posicion+1; siguiente_palabra < cantidad_palabras; cantidad_palabras++)
   	
    	    comparador = strcmp(list[posicion], list[siguiente_palabra]);


    }
    printf(" %i \n", comparador);

    return EXIT_SUCCESS;
}
