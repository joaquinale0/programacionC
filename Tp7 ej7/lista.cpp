#include "lista.h"

Tlista inicializar(void){
	Tlista x;
	x=NULL;
	return x;
}
void cargar_lista(Tlista* x,int nro){
	Telemento elem;
	Tlista aux;
	elem=cargar_uno(nro);
	aux=nuevo_nodo(elem);
	if(*x!=NULL){
		aux->sig=*x;
	}
	*x=aux;
}
Tlista nuevo_nodo(Telemento elem){
	Tlista x;
	x=(Tlista)malloc(sizeof(Tnodo));
	x->lista=elem;
	x->sig=NULL;
	return x;
}
void mostrar_lista(Tlista x,int b){
	while(x!=NULL){
		if(b==0){
		    if(retornar_dni(x->lista)==0){
			printf("\n---------------------------------------------\n");
		    mostrar_uno(x->lista);
			printf("\n---------------------------------------------\n");
			}
		}
		else{
			if(retornar_dni(x->lista)!=0){
				printf("\n---------------------------------------------\n");
				mostrar_uno(x->lista);
				printf("\n---------------------------------------------\n");
			}
		}
		x=x->sig;
	}
}
void ocupar_habitacion_lista(Tlista* x,int nro){
	Tlista corrimiento;
	corrimiento=*x;
	while(corrimiento!=NULL){
		if(retornar_hab(corrimiento->lista)==nro){
			ocupar_habitacion(&corrimiento->lista);
		}
		corrimiento=corrimiento->sig;
	}
}
void desocupar_habitacion_lista(Tlista x,int nro){
	while(x!=NULL){
		if(retornar_hab(x->lista)==nro){
			desocupar_habitacion(&x->lista);
		}
		x=x->sig;
	}
}
int lista_vacia(Tlista x){
	if(x==NULL)
		return 1;
	else return 0;
}
