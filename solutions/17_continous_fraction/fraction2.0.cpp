#include <stdio.h>
#include <stdlib.h>

#define N 10

int factorial(int numero){

    if(numero <= 0)
	return 1;

    return numero * factorial(numero-1);

}



double suma(int n){
    
    if(n < 0 )
	return 0;

    return 1. / factorial(n) + suma(n-1);


}


int main(int argc, char *argv[]){

// Hacer la inversa de una fraccion y sumarla con la anterior.

printf("%.4lf \n", suma(N));



    return EXIT_SUCCESS;
}
