/* given number is prime when is not is divided by the lower primes. Find the 70 first primes. */

#include <stdio.h>
#include <stdlib.h>

#define N 70



int main(int argc, char *argv[]){

    int primes[N];

    int primes_found = 1,
	possible_prime = 3;

    bool is_divisible = false;

    primes[0] = 2;

    do{

	for(int divisor=2; !is_divisible && (divisor <= possible_prime/2); divisor++, possible_prime++){

	    if(possible_prime % divisor == 0)
		is_divisible = true;

	    else{
		primes[primes_found] = possible_prime;
		primes_found++;

	    }

	    is_divisible = false;
	}

    }while(primes_found <= N);

    for(int contador=0; contador < N; contador++)
	printf("%i ", primes[contador]);


    printf("\n");

    return EXIT_SUCCESS;
}
