#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[1]){

if(argc < 2)
printf("Please, you must introduce two words.\n");

else
for(int contador=1; contador <= 10; contador++)

printf("%i. %s \n", contador, argv[1]);



return EXIT_SUCCESS;



}
