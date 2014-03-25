#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>

double power(double base, int exponent){
    double result = 1;

    for (int index = 0; index < exponent; index++)
	result *= base;

    return result;

}

int main(int argc, char *argv[]){

    double base;
    int exponent,
	c;    

    opterr = 0;

    while(( c = getopt(argc, argv, "h:")) != -1)  // Se ponen dos puntos para indicar que es opcional.
	switch(c){

	    case 'h':
		fprintf(stderr, "Usage %s <base> <exponent>\n", argv[0]);
		exit(EXIT_FAILURE);
		break;

	    case '?':
		if(isprint(optopt))
		    fprintf(stderr, "Unknown option -%c \n", optopt);
		else
		    fprintf(stderr, "Unknown option caracter \\x%x \n", optopt);

		return EXIT_FAILURE;
		break;
	}

    if (argc < 3)
	return EXIT_FAILURE;

    base = atof(argv[1]);
    exponent = atoi(argv[2]);

    printf("%.2lf \n",  power(base, exponent));

    return EXIT_SUCCESS;
}
