#include <stdio.h>
#include <stdlib.h>

#define T 1.

struct TCoordenadas{

    double x;
    double y;
};

struct TFisica{

    struct TCoordenadas punto;
    struct TCoordenadas velocidad;
    struct TCoordenadas aceleracion;
};

int main(int argc, char *argv[]){

    struct TFisica balon;

    printf("Introduce velocidad:\nx: ");
    scanf(" %lf", &balon.velocidad.x);
    printf("y: ");
    scanf(" %lf", &balon.velocidad.y);

    balon.punto.x = 2;
    balon.punto.y = 5;

    balon.aceleracion.x = 0;
    balon.aceleracion.y = -10;

    do{

	balon.velocidad.x += balon.aceleracion.x * T;
	balon.velocidad.y += balon.aceleracion.y * T;

	balon.punto.x += balon.velocidad.x * T;
	balon.punto.y += balon.velocidad.y * T;

	printf("Posicion x,y: %7.2lf , %7.2lf \n", balon.punto.x, balon.punto.y);

    }while(balon.punto.y > 0);

    return EXIT_SUCCESS;
}
