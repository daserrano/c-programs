/*Print a string backwards.

  ```c
  int main(...) {

  const char *sentence  = "The world is a vampire.";
  const char *beginning = sentence;
  const char *end       = sentence;

  Move end to the last byte in sentence

  print from end to beginning
  }

  ```
  ```bash
  the_owl@eniac:~$ ./print_backwards

# => .eripmav a si dlrow ehT
```
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    const char *sentence = " The world is a vampire. ";
    const char *beginning = sentence; //Creacion de puntero inicio.
    const char *end; //Creacion de puntero fin.

    // Se recorre todo el contenido de la constante.
    do{
	beginning++;
    }while(*beginning !='\0'); //Repetir hasta que no llegue al final.

    end = beginning; //Cuando el puntero beginning señale el final, ahi empieza el puntero end. 

    //Se recorre todo el contenido de la constante.
    do{
	printf("%c", *end);
	end--;
    }while(end != sentence); //Repetir hasta que sea igual que la sentencia.

    printf("\n");
    return EXIT_SUCCESS;

}

