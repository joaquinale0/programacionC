#ifndef LISTA_H
#define LISTA_H

#include "cliente.h"

typedef cliente listaCliente[tamCad];

typedef struct{
	listaCliente vec;
	int tam;
}Tlista;

Tlista inicializar (void);
void cargar_lista(Tlista*, int);
void mostrar_lista(Tlista,int);
void mostrar_uno_lista(Tlista, int);
int BBR (Tlista, int, int, float);
void q_sort(Tlista*, int, int);
int devolver_tamano(Tlista);

void m_sort(Tlista*, int, int);
void marge(Tlista*, int, int, int);

void cargar_deudores(Tlista*, Tlista, int);

#endif
