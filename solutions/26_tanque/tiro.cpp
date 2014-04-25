#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <ncurses.h>

#define T .1

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
    __fpurge(stdin);
    scanf(" %lf", &balon.velocidad.x);
    printf("y: ");
    __fpurge(stdin);
    scanf(" %lf", &balon.velocidad.y);

    balon.punto.x = 0;
    balon.punto.y = 5;

    balon.aceleracion.x =   0;
    balon.aceleracion.y = -10;

    initscr();
    curs_set(0);

    do{

	balon.velocidad.x += balon.aceleracion.x * T;
	balon.velocidad.y += balon.aceleracion.y * T;

	balon.punto.x += balon.velocidad.x * T;
	balon.punto.y += balon.velocidad.y * T;

	mvprintw(20 - balon.punto.y, balon.punto.x, "*");

	refresh();

    }while(balon.punto.y >= 0);

    getch();
    endwin();

    return EXIT_SUCCESS;
}
