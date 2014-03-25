#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define ENGLISH 0
#define SPANISH 1

void usage(const char *argv){

    fprintf(stderr, "------------------\n"
	    	    "\tUSAGE \n"
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

     double base = atof(argv[1]);
     int exponent = atoi(argv[2]),
	 c,
	 language = ENGLISH;

     const char *user_language = NULL;

     const char *sentence[] = {
	 			"The result is: ",
				"El resultado es: "
     };

     while ((c = getopt(argc, argv, "h:")) != -1)
	    switch(c){
		case 'h':
		    usage(argv[0]);
		    break;
		
		case 'l':
		    user_language = optarg;
		    //FALTA
		    if(strcasecmp(user_language, "spanish") == 0)
			language = SPANISH;
		    break;
	    } 

     printf("%lf \n", operacion(base, exponent));


    return EXIT_SUCCESS;
}
