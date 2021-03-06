#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

#define MAX 3
#define MAX_CARACTERES 40

struct TAsignaturas{

    double programacion;
    double etica;

}; 

struct TAlumno{

    char nombre[MAX_CARACTERES];
    struct TAsignaturas asignaturas;
    double media;

} ;

void meter_datos(struct TAlumno alum[]){

    double media_total[MAX];

    for(int index=0; index < MAX; index++){

	printf("Nombre del alumno: ");
	__fpurge(stdin);
	gets( alum[index].nombre);

	printf("Nota Programacion: ");
	__fpurge(stdin);
	scanf(" %lf", &alum[index].asignaturas.programacion);

	printf("Nota Etica: ");
	__fpurge(stdin);
	scanf(" %lf", &alum[index].asignaturas.etica);

    }

}

double media_prog(struct TAlumno alum[]){

    double media_programacion = 0;

    for(int index=0; index < MAX; index++){
	media_programacion += alum[index].asignaturas.programacion;
    }

    return media_programacion;
}

double media_eti(struct TAlumno alum[]){

    double media_etica = 0;

    for(int index=0; index < MAX; index++){
	media_etica += alum[index].asignaturas.etica;
    }

    return media_etica;
} 

void media_alum(struct TAlumno alum[MAX]){

    for(int index=0; index < MAX; index++)
	alum[index].media = (alum[index].asignaturas.programacion + alum[index].asignaturas.etica) / 2;

}

void imprimir(struct TAlumno alum[]){

    system("clear");

    for(int index=0; index < MAX ; index++)
	printf("Nombre Alumno: %s \n \
		Programacion: %.2lf \n \
		Etica:        %.2lf \n\n\n", alum[index].nombre, alum[index].asignaturas.programacion, alum[index].asignaturas.etica);

} 

int main(int argc, char *argv[]){

    struct TAlumno alumnos[MAX];

    double media_programacion = 0,
	   media_etica        = 0;


    for(int index=0; index < MAX; index++){
	alumnos[index].asignaturas.programacion = alumnos[index].asignaturas.etica = 0;
    }

    meter_datos(alumnos);

    media_programacion = media_prog(alumnos) / MAX;

    media_etica = media_eti(alumnos) / MAX;

    media_alum(alumnos);

    imprimir(alumnos);

    printf("La media de programacion:  %.2lf \n", media_programacion);
    printf("La media de etica:         %.2lf \n\n", media_etica);

    for(int index=0; index < MAX; index++)
    printf("La media de %s: %.2lf \n", alumnos[index].nombre, alumnos[index].media);

    printf("\n");
    return EXIT_SUCCESS;

}

