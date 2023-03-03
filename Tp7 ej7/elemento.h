#ifndef ELEMENTO_H
#define ELEMENTO_H
#include "leecad.h"

typedef struct{
	int nro_hab;
	int tipo_hab;
	long dni;
}Telemento;

Telemento cargar_uno(int);
void mostrar_uno(Telemento);
void ocupar_habitacion(Telemento*);
void desocupar_habitacion(Telemento*);
int retornar_hab(Telemento);
long retornar_dni(Telemento);

#endif
