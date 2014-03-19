#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){

    const char *sentence = "The world is a vampire.";
    const char *beginning = sentence;
    const char *end = sentence;


    do{
	*end++;

    }while(*end != '\0');

    do{
	*end--;
	printf("%c", *end);

    }while(end != beginning);


    printf("\n");

    return EXIT_SUCCESS;
}
