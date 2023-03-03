#ifndef LISTA_H
#define LISTA_H

#include "ate.h"

typedef Tatencion vecTatencion[20];
typedef struct{
	vecTatencion lista;
	int tam;
}Tlista;

Tlista inicializar (void);
void cargar_lista (Tlista*, int);
void mostrar_lista_mes (Tlista);
void ordenar_dni (Tlista*);
void mostrar_lista_dni (Tlista);
void q_sort (vecTatencion, int, int);
#endif
