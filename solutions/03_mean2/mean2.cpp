#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]){

int numero=0, resultado=0, contador=0;
do{

printf("Introduce un numero: ");
scanf(" %i", &numero);

resultado += numero;
contador += contador;


}while(numero > 0);

resultado /= contador;

printf("La media de todos los numeros es %i \n", resultado);



    return EXIT_SUCCESS;
}
