/*Print sorted. strcmp.
 
 ```c
  int main(...) {
   const char *list[] = { "yield", "yelp", "yellow"};
  ```
*/

#include <stdio.h>
#include <stdlib.h>


char *compara(const char *list[]){

const char *puntero = *list ;



do{
printf("%s \n", puntero);
puntero++;

}while(*puntero != '\0');

}

int main(int argc, char *argv[]){

const char *list[] = { "yield", "yelp", "yellow"};


compara(list);


return EXIT_SUCCESS;
}
