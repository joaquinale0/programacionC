#ifndef ELEMENTO_H
#define ELEMENTO_H
#include "leecad.h"

typedef struct{
	long idfabrica;
	Tcad nombre;
	int cantidad;
	int precio;
}Telemento;

Telemento carga_uno(void);
void mostrar_uno(Telemento);
int retorna_cantidad(Telemento);

#endif
