#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <strings.h>

#define ENGLISH 0
#define SPANISH 1
#define MAX 255

void usage(const char *argv){

    fprintf(stderr, "\tUSAGE \n"
	    "\n"
	    "%s <base> <exponent>\n", argv);

}

double operacion(double base, int exponent){

    double result = 1;

    for(int index = 0; index < exponent; index++)
	result *= base;

    return result;

}

int main(int argc, char *argv[]){

    double base;
    int exponent,
	c,
	language = ENGLISH;
	
    char user[MAX];

    const char *user_language = NULL;

    const char *sentence[] = {
	"The result is: ",
	"El resultado es: "
    };

    while ((c = getopt(argc, argv, "hl:")) != -1)
	switch(c){
	    case 'h':
		usage(argv[0]);
		break;

	    case 'l':
		user_language = optarg;
		strncpy(user, user_language, MAX); // Sirve para metodo de seguridad. Y el usuario no pueda meter mas de 255 caracteres.
		if(strcasecmp(user_language, "spanish") == 0) // Sirve para no distinguir entre mayusculas y minusculas.
		    language = SPANISH;
		break;
	    case '?':
		usage(argv[0]);
		break;
	} 

	if (argc - optind < 2){
            usage(argv[0]);
	    exit(EXIT_FAILURE);
	}

	base = atof(argv[optind]);
	exponent = atoi(argv[optind + 1]);

    printf("%s %lf \n",sentence[language], operacion(base, exponent));


    return EXIT_SUCCESS;
}
