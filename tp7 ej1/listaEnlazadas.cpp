#include "listaEnlazadas.h"

Tlista nueva_lista(void){
	Tlista x;
	x=NULL;
	return x;
}
///--------------------------------------------------
Tlista nuevo_nodo(Telemento elem){
	Tlista nodo;
	nodo=(Tnodo*)malloc(sizeof(Tnodo));
	nodo->lista=elem;
	nodo->sig=NULL;
	return nodo;
}
///--------------------------------------------------
void cargar_inicio(Tlista* lis){
	Tlista nodo;
	Telemento elem;
	elem=carga_uno();
	nodo=nuevo_nodo(elem);
	if(*lis!=NULL){
		nodo->sig=*lis;
	}
	*lis=nodo;
}
///--------------------------------------------------
void cargar_final(Tlista* lis){
	Tlista nodo, aux;
	Telemento elem;
	elem=carga_uno();
	nodo=nuevo_nodo(elem);
	if(*lis!=NULL){
		aux=*lis;
		while(aux->sig!=NULL)
			aux=aux->sig;
		aux->sig=nodo;
	}
	else *lis=nodo;
}
///-------------------------------------------------
void mostrar_lista(Tlista x){
	if(x!=NULL){
		printf("lista\n");
		while(x!=NULL){
			mostrar_uno(x->lista);
			x=x->sig;
		}
	}
	else printf("lista vacia\n");
}
///--------------------------------------------------
int lista_vacia(Tlista x){
	if(x==NULL)
		return 1;
	else
		return 0;
}
///--------------------------------------------------
void mostrar_compro_mas(Tlista x){
	Telemento copia;
	int may=-1,aux;
	while(x!=NULL){
		aux=retorna_cantidad(x->lista);
		if(aux>may){
			copia=x->lista;
		}
		x=x->sig;
	}
	printf("el mayor comprador es:\n");
	mostrar_uno(copia);
}
