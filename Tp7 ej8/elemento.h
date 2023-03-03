#ifndef ELEMENTO_H
#define ELEMENTO_H
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct{
	int nro_hab;
	long dni;
}Telemento;

Telemento cargar_uno(int);
void mostrar_uno(Telemento);
int retornar_dni(Telemento);
int retornar_nro_hab(Telemento);
void modificar_habitacion(Telemento*,int,int);

#endif
