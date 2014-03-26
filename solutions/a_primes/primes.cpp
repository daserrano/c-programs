#include <stdio.h>
#include <stdlib.h>

#define N 70

int main(int argc, char *argv[]){

    int primos[N],
	primos_encontrados = 1; // The number 2 is the first prime number.

    primos[0] = 2; // It is saved in the array.

    for(int numeros = 3; primos_encontrados < N; numeros++){
	bool es_primo = true; // Variable type bool with value true.

	for(int divisor = 0; es_primo && divisor < primos_encontrados; divisor++) // If the number is prime yet and divisor is more less.

	    if( numeros % primos[divisor] == 0)
		es_primo = false; // If the number is divisible = not prime number.

	    if(es_primo)
		primos[primos_encontrados++] = numeros; // If it is a prime number, it is saved in array.

    }

    for(int i=0; i < N ; i++)
	printf("%i ", primos[i]); // Print the array with all the 70 first primes.

    printf("\n");

    return EXIT_SUCCESS;
}
