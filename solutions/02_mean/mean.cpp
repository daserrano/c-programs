#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[1]){

double numero, media;

for(int contador=1; contador <= 10; contador++){ //Pide 10 numeros.

printf("%i. Introduce un numero: ", contador);
scanf(" %lf", &numero);

media += numero; //Almacena los numeros en media.

}

media /= 10.;  //Lleva . para indicar un double.
printf("La media es %.2lf \n", media); 

return EXIT_SUCCESS;
}
