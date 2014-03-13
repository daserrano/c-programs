/* given number is prime when is not is divided by the lower primes. Find the 70 first primes. */

// Try Criba de Eratóstenes.

#include <stdio.h>
#include <stdlib.h>

#define N 70



int main(int argc, char *argv[]){

    int primes[N];

    int primes_found = 1,
	possible_prime = 3;

    bool divisible = false;  // Para comprobar si un numero tiene numeros divisibles.
    primes[0] = 2;

    do{

	for(int divisor=2; divisor < possible_prime; divisor++){

	    if(possible_prime % divisor == 0){ // Si es divisible sale del for.
		divisible = true;
		break;
	    }
	}

	if(divisible == false){ // Si no es divisible, entonces es un numero primo.
	    primes[primes_found] = possible_prime;
	    primes_found++;
	}
	divisible = false;
	possible_prime++;


    }while(primes_found <= N); // Repetir todo hasta que no encuentre 70 numeros primos.

    for(int contador=0; contador < N; contador++) // Imprimir la matriz.
	printf("%i ", primes[contador]); 


    printf("\n");

    return EXIT_SUCCESS;
}
