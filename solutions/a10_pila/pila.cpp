/* Hacer una pila del  tipo struct TPila o TStack.
 *
 *  Internamente tiene un array de MAX caracteres de tipo char
 *
 *  Tiene un entero que se llama cima o top, que siempre indica la primera posicion libre en el array.
 *
 *  La funcion show o muestra que muestra el contenido de la pila desde la base hasta la cima.
 *  Tambien que reciba un objeto de TPila y lo muestra y no devuelve nada.
 *
 *  La funcion push va a recibir un caracter. Y va a recibir un objeto del TPila. Su objetivo es meter el caracter dentro de la pila. Si la pila 
 *   esta llena no se puede introduccir nada.
 *
 *  La funcion pop devuelve el ultimo objeto apilado.
 *
 */


#include <stdio.h>
#include <stdlib.h>

#define MAX 10

enum TOpcion { muestra=1, escribir, ultimo, salir};

struct TPila{

    char caracteres[MAX];
    int cima;

};   

enum TOpcion menu(){

    int opcion_elegida;

    printf("Elige una opcion: \n"
	    "1. Mostrar pila. \n"
	    "2. Escribir caracter. \n"
	    "3. Mostrar ultimo caracter \n"
	    "4. Salir \n"
	  );
    scanf(" %i", &opcion_elegida);

    return (enum TOpcion) opcion_elegida;
}

void show(struct TPila pila){

    printf("_______\n");
    for(int index= 0; index < pila.cima ; index++)
	printf("| %2c  |\n", pila.caracteres[index]);

    printf("_______\n");

    printf("\n");

}

void push(struct TPila *pila, char caracter){


    (*pila).caracteres[(*pila).cima++] = caracter;

}

void pop(const char *puntero){

    printf("El ultimo caracter introducido es: %c \n\n", *puntero);
}

int main(int argc, char *argv[]){

    struct TPila pila;
    int opcion;
    char caracter;

    const char *puntero = 0;

    pila.cima = 0;

    do{
	switch(opcion = menu()){
	    case 1:
		show(pila);
		break;

	    case 2:
		printf(" Introduce un caracter: ");
		scanf(" %c", &caracter);

		puntero = &caracter;

		push(&pila, caracter); 

		break;

	    case 3:
		pop(puntero);
		break;

	    case 4:
		return EXIT_SUCCESS;

	}

    }while( opcion != 4);

}
