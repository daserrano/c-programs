#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]){

int numero=0, contador=0;
double resultado =0;
do{

printf("Introduce un numero: ");
scanf(" %i", &numero);

if(numero > 0){
resultado += numero;
contador++;
}

}while(numero > 0);

resultado /= contador;

printf("La media de todos los numeros es %.2lf \n", resultado);



    return EXIT_SUCCESS;
}
