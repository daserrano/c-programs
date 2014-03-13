/*Complete the following program in order to print the list of words.

  ```c
  int main() {
  const char *list[] = {
  "bread", 
  "toast",
  "bacon"
  };
  }
  ```
  Find the way (using sizeof operator) to print the number of words defined in the list.
 */


#include <stdio.h>
#include <stdlib.h>

int main(){
    // We have an array with some words.
    const char *list[] = {
	"bread",
	"toast",
	"bacon",
	"egg"
    };

    // To determine the number of elements in the array, we can divide the total size of the array by the size of the array element.
    int palabras = sizeof(list)/sizeof(char *);

    // To show the list, we run the array.
    for(int veces=0; veces < palabras; veces++)
	printf("%s \n", list[veces]); 

    // It shows the number of words the array contains.
    printf("La lista tiene %i palabras\n", palabras);

    return EXIT_SUCCESS;
}







