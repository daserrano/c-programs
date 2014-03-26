#include <stdio.h>
#include <stdlib.h>

#define N 70

//do it again. It is wrong.


int main(int argc, char *argv[]){

    int primos[N],
	posible_primo = 3,
	numero_primos = 1,
	contador = 1;

    primos[0] = 2;

    do{
	for(int divisor = 2; divisor < posible_primo; divisor++)
	    if(posible_primo % divisor != 0){
		primos[contador] = posible_primo;
		numero_primos++;
		contador++;
	    }
	posible_primo++;
	
    }while(numero_primos < N);

    	for(int contador = 0; contador < N; contador++)
	    printf("%i ", primos[contador]);

    printf("\n");

    return EXIT_SUCCESS;
}
