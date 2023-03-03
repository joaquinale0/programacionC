#ifndef HABITACION_H
#define HABITACION_H
#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int tipo;
	long dni;
}Thabitacion;

Thabitacion crear_uno ();
void mostrar_uno (Thabitacion,int);
void modificar_uno (Thabitacion*);

#endif
