// Solve excercise number 10 using recursion.

#include <stdio.h>
#include <stdlib.h>

void go_to_end( const char *sentence){

    if(*sentence == '\0')
	return; 

    go_to_end(++sentence);
    printf("%c", *sentence); // Recorre el puntero caracter a caracter. 
    
    // Si ponemos antes el printf que la llamada a funcion, mostrara la frase como es. 

}


int main (int argc, char *argv[]){

    const char *sentence  = " The world is a vampire.";

    go_to_end(sentence);

    printf("\n");
    return EXIT_SUCCESS;
}
