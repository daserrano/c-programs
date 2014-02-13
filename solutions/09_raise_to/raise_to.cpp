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

    for(int numero=0; numero<N; numero++){
    int valor = list[numero];
	for(int count=1; count<exponent; count++){
	    if (numero==0)
            list[numero] = 1;
	    else{
            list[numero] *= valor;
	    }
    }
    }
}

void fill_in(int list[N]){
    for(int count=0; count<N; count++)
	list[count]= count+1;
}

int main(int argc, char *argv[]){
if(argc!=2)
    error(argv[0]);

    int list[N],
	exponent = atoi(argv[1]);

    fill_in(list);
    power(list, exponent);

    for(int contador=0; contador<N; contador++)
	printf("%i ", list[contador]);

    printf("\n");
    return EXIT_SUCCESS;
}
