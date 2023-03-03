#ifndef LISTA_ENLAZADA_H
#define LISTA_ENLAZADA_H
#include "elemento.h"
#define MLV "No se puede realizar lista vacia\n"

typedef struct nodo{
	Telem ent;
	struct nodo* sig;
}Tnodo;

typedef Tnodo* Tlista;

Tlista inicializar(void);
Tlista nuevo_nodo(Telem);
void cargar_inicio(Tlista*);
void cargar_final(Tlista*);
void mostrar_lista(Tlista);
void cargar_despues_primo(Tlista*);
int promedio_num_par(Tlista);
int lista_vacia(Tlista);

#endif
