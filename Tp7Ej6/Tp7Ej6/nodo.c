#include "nodo.h"
pNodo inicializar (void){
	pNodo x;
	x= NULL;
	return x;
}
pNodo nuevo_nodo (void){
	pNodo x;
	x = (pNodo) malloc(sizeof(Tnodo));
	x->elem = crear_uno();
	x->sig = NULL;
	return x;
}
void cargar_nodo (pNodo* x){
	pNodo y,aux;
	y = nuevo_nodo();
	aux = *x;
	if(aux != NULL){
		while(aux->sig != NULL){
			aux = aux->sig;
		}
		aux->sig = y;
	}
	else{
		*x = y;
	}
	
}
void mostrar_nodo (pNodo x){
	int i =0;
	if(x != NULL){
		while(x != NULL){
			i++;
			mostrar_uno(x->elem, i);
			x=x->sig;
		} 
	}
	else{
		printf("no hay ingresados");
	}
}
void modificar_lista (pNodo *x){
	if(x != NULL){
		int pos,i=1;
		pNodo corr = *x;
		mostrar_nodo(*x);
		printf("ingrese un numero a modificar:\n");
		scanf("%d",&pos);
		while(i < pos){
			corr = corr->sig;
			i++;
		}
		modificar_uno(&corr->elem);
	}
	else{
		printf("no hay ingresados");
	}
}
