#ifndef LISTA_H
#define LISTA_H
#include "elemento.h"
#define MLV "No se pudo realizar lista vacia\n"

typedef struct nodo{
	Telemento lista;
	struct nodo* sig;
}Tnodo;
typedef Tnodo* Tlista;

Tlista inicializar(void);
Tlista nuevo_nodo(Telemento);
void cargar_lista(Tlista*,int);
void mostrar_lista(Tlista,int);
void ocupar_habitacion_lista(Tlista*,int);
void desocupar_habitacion_lista(Tlista,int);
int retornar_nro_hab(Tlista);
int lista_vacia(Tlista);

#endif
