#ifndef NODO_H
#define NODO_H
#include "habitacion.h"

typedef struct nodo{
	Thabitacion elem;
	struct nodo* sig;
}Tnodo;

typedef Tnodo* pNodo;

pNodo inicializar (void);
pNodo nuevo_nodo (void);
void cargar_nodo (pNodo*);
void mostrar_nodo (pNodo);
void modificar_lista (pNodo*);
#endif
