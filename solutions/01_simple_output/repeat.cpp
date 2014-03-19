#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[1]){

if(argc < 2 || argc > 2)
fprintf(stderr, "Please, you must introduce: <name of program> + <a parameter>.\n");

else
for(int contador=1; contador <= 10; contador++)

printf("%i. %s \n", contador, argv[1]);



return EXIT_SUCCESS;



}
