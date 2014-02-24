/*Print sorted. strcmp.

  ```c
  int main(...) {
  const char *list[] = { "yield", "yelp", "yellow"};
  ```
 */

#include <stdio.h>
#include <stdlib.h>


void compara(const char *list[]){


    for(int i=0;  i<3; i++){
	const char *puntero = list[i] ;

	do{
	printf("%c", *puntero);
	puntero ++;
	}while(*puntero != '\0');
	printf("\n");
    }

}

int main(int argc, char *argv[]){

    const char *list[] = { "yield", "yelp", "yellow"};


    compara(list);


    return EXIT_SUCCESS;
}
