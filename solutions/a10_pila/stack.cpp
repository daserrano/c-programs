#include <stdio.h>
#include <stdlib.h>

#define MAX 5

struct TStack{

    int stack[MAX];
    int next;

};


void push(int value, struct TStack *store){
    if(store->next >= MAX){
	printf("La matriz esta llena.\n");
	return;
    }

    store->stack[store->next++] = value;

}

int pop(struct TStack *store){

    if(store->next <= 0){
	printf("La matriz esta vacia.\n");
	return 0;

    }

    return store->stack[--store->next];

}

void muestra(struct TStack student){

    for(int i=0; i < student.next; i++)
	printf("%i ", student.stack[i]);

    printf("\n");


}

int main(int argc, char *argv[]){


    struct TStack student;
    struct TStack league_results;

    student.next        = 0;
    league_results.next = 0;

    push(5, &student);
    push(7, &student);
    push(3, &student);

    printf("He sacado un: %i \n", pop(&student));

    push(4, &student);
    muestra(student);






    return EXIT_SUCCESS;
}
