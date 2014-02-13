/* Write a program to raise N numbers to the _<command line argument>_ power.

#define N 0x10

int power(int base, int exponent) {
}

void fill_in(int list[N], ...) {
}

int main(...) {
int list[N];
fill_in(list, ...);
}

```
```bash
the_owl@eniac:~$ ./raise_to 3
# => 1 8 27 ....
```
 */

#include <stdio.h>
#include <stdlib.h>

#define N 0x10 //16 en decimal.

void error(char *argv){

    fprintf(stderr, "Usage: %s number \n", argv);
    exit(EXIT_FAILURE);
}

int power(int list[N], int exponent){

    int result=1;

    for(int number=0; number<N; number++){
    int value = list[number];
	for(int count=1; count<exponent; count++){
	    if (number==0) //El numero 1 elevado a algo da siempre 1.
            list[number] = 1;
	    else{
            list[number] *= value;
	    }
    }
    }
}
// Se rellena con numeros del 1 al 16.
void fill_in(int list[N]){
    for(int count=0; count<N; count++)
	list[count]= count+1;
}

int main(int argc, char *argv[]){
// El usuario debe introducir dos argumentos, el nombre del programa y el exponente.
if(argc!=2)
    error(argv[0]);

    int list[N],
	exponent = atoi(argv[1]); //se convierte a entero.

    fill_in(list); //se rellena la matriz.
    power(list, exponent); // Se expone el numero al exponente que indica el usuario.

    for(int contador=0; contador<N; contador++)
	printf("%i ", list[contador]);

    printf("\n");
    return EXIT_SUCCESS;
}
