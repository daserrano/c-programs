#include <stdio.h>
#include <stdlib.h>

#define MAX 0x100

struct TCode {    //Variable de tipo struct.

    char message[MAX];
    int key;

};

char code(char letter, int key){

    char answer = letter;

    if(letter >= 'a' && letter <= 'z'){
	answer += key;

	if(letter > 'z')
	    answer -= ('z' - 'a' + 1); //Si pasa de z, vuelve a la a.

    }

    if(letter >= 'A' && letter <= 'Z'){
	answer += key;

	if(letter > 'Z')
	    answer -= ('Z' - 'A' + 1);

    }

}

int main(int argc, char *argv[]){

    struct TCode top_secret;

    top_secret.key = 3; // Valor de key.

    printf("Introduce una frase: ");
    gets(top_secret.message);   // Hace lo mismo que scanf pero mas sencillo.

    for(char *letter = top_secret.message; *letter != '\0'; letter++) //Puntero que recorre la matriz.
	printf("%c", code(*letter, top_secret.key));

    printf("\n");

    return EXIT_SUCCESS;
}
