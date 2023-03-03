#ifndef LISTA_H
#define LISTA_H
#include "elemento.h"
#define MLV "No se puede lista vacia\n\n"
#define EXITO "\nSe ha realizado exitosamente\n\n"

typedef struct nodo{
	Telemento lista;
	struct nodo* sig;
}Tnodo;

typedef Tnodo* Tlista;

Tlista inicializar(void);
Tlista nuevo_nodo(Telemento);
void agregar_lista(Tlista*,int);
void mostrar_lista(Tlista);
int lista_vacia(Tlista);
int mostrar_habitaciones_libres(Tlista);
void ocupar_habitacion_lista(Tlista,int,int);
void mostrar_si_existe_dni(Tlista,long);
void mostrar_si_existe_nro(Tlista,int);
long retornar_dni_lista (Tlista,int);
int retornar_habitacion_asignada(Tlista,long);
void elminar_habitacion_lista(Tlista*,int);
int retornar_tamanio(Tlista);
Telemento retornar_habitacion_lista(Tlista,int);

#endif
