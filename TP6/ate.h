#ifndef ATE_H
#define ATE_H

#include <stdio.h>
#include <string.h>


#define tamCad 30

typedef char Tcad[tamCad];

//Tcad especialidades[5] = {"Clinico","Traumatologia","Oftalmologo","Dentista","Dermatologo"};

typedef struct{
	int dia;
	int mes;
	int anio;
}Tfecha;

typedef struct{
	long dni;
	Tfecha fecha;
	int especialidad;
}Tatencion;

void leecad (Tcad);
int elegirEspecialidad(void);
Tatencion crearUno (void);
void mostrarUno (Tatencion);
long devolverDni (Tatencion);
int compararEspecialidad (Tatencion, int);

#endif
