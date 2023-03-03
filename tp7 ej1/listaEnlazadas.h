#ifndef LISTAENLAZADAS_H
#define LISTAENLAZADAS_H
#include "elemento.h"
#define MLV "no se puede mostrar lista vacia\n\n"

typedef struct nodo{
	Telemento lista;
	struct nodo* sig;
}Tnodo;
typedef Tnodo* Tlista;

Tlista nueva_lista(void);
void cargar_inicio(Tlista*);
void cargar_final(Tlista*);
Tlista nuevo_nodo(Telemento);
void mostrar_lista(Tlista);
int lista_vacia(Tlista);
void mostrar_compro_mas(Tlista);

#endif
