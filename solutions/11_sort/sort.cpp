/*Print sorted. strcmp.

  ```c
  int main(...) {

  const char *list[] = { "yield", "yelp"};

  ```
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char comparar_palabras(const char *list){

    int compara=0;
    char *primera = list[0], //Da error de conversion.
	 *segunda = list[1];

    compara = strcmp(primera, segunda);
    if(compara == 0)
	printf("Las palabras son iguales.");
    else{
	if(compara < 0) 
	    printf(" %c %c", list[1], list[0]);
	else
	    printf(" %c %c", list[0], list[1]);
    }
}


int main(int argc, char *argv[]){

    const char *list[] = { "yield", "yelp"};

    comparar_palabras(*list);

    return EXIT_SUCCESS;
}

