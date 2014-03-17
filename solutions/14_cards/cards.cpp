#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reparto(int jugadores[], int numero_jugadores, int numero_cartas){


    static int posicion = 0;

    for(int contador = numero_cartas; contador > 0; contador--) // With this algoritm, the players receive a card.
	jugadores[posicion++ % numero_jugadores] += 1 ; // % between number of players, because we need repeat the array.
}

void error(char *argv[0]){
    fprintf(stderr, "Usage %s <number_of_players> <number_of_cards> \n", argv[0]);
    exit(EXIT_FAILURE);
}

int main(int argc, char *argv[]){

    if(argc < 3) //If the program has less of 3 numbers, it has error.
	error(argv);

    int numero_jugadores = atoi(argv[1]), // Number of players.
	jugadores[numero_jugadores], // array with the height.
	numero_cartas = atoi(argv[2]); // Number of cards.


    for(int contador = 0; contador < numero_jugadores; contador++) // Fill in the array.
	jugadores[contador] = 0;


    reparto(jugadores, numero_jugadores, numero_cartas);

    for(int contador = 0 ; contador < numero_jugadores; contador++) // Write the answer.
	printf("Jugador%i: %i cartas \n",contador+1, jugadores[contador]);


    return EXIT_SUCCESS;
}

