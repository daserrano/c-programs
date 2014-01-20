#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[1]){

double numero, media;

for(int contador=1; contador <= 10; contador++){

printf("%i. Introduce un numero: ", contador);
scanf(" %lf", &numero);

media += numero;

}

media /= 10;
printf("La media es %.2lf \n", media);

return EXIT_SUCCESS;
}
