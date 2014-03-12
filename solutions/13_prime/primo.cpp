#include <stdio.h>
#include <stdlib.h>

void indicar(const char *comando){
    fprintf(stderr, "Uso: %s <posible primo>\n", comando);
    exit(EXIT_FAILURE);
}

bool es_divisible(int dividendo, int divisor){
    return dividendo % divisor == 0;
}

int main(int argc, char *argv[]){
    int  numero;
    bool he_encontrado_un_divisor = false;

    if (argc<2)
	indicar(argv[0]);

    numero = atoi(argv[1]);

    for (int posible_divisor=2;
	    !he_encontrado_un_divisor && posible_divisor<=numero/2;
	    posible_divisor++)
	if ( es_divisible(numero, posible_divisor) )
	    he_encontrado_un_divisor = true;

    if (he_encontrado_un_divisor)
	printf("%i no es primo.\n", numero);
    else
	printf("%i es primo.\n",    numero);

    return EXIT_SUCCESS;
}
