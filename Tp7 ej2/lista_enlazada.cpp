#include "lista_enlazada.h"

///--------------------------------------------------
Tlista inicializar(void){
	Tlista x;
	x=NULL;
	return x;
}
///----------------------------------------------------
Tlista nuevo_nodo(Telem x){
	Tlista nodo;
	nodo=(Tlista) malloc(sizeof(Tnodo));
	nodo->sig=NULL;
	nodo->ent=x;
	return nodo;
}
///---------------------------------------------------
void cargar_inicio(Tlista* x){
	Tlista aux;
	Telem elem;
	elem=cargar_uno();
    aux=nuevo_nodo(elem);
	if(x!=NULL){
		aux->sig=*x;
	}
	*x=aux;
}
///--------------------------------------------------
void cargar_final(Tlista* x){
	Tlista aux,corrimiento;
	Telem elem;
	corrimiento=*x;
	elem=cargar_uno();
	aux=nuevo_nodo(elem);
	if(corrimiento!=NULL){
		while(corrimiento->sig!=NULL)
			corrimiento=corrimiento->sig;
		corrimiento->sig=aux;
	}
	else
		*x=aux;
}
///------------------------------------------------
void mostrar_lista(Tlista x){
	while(x!=NULL){
		mostrar_uno(x->ent);
		x=x->sig;
	}
}
///-------------------------------------------------
void cargar_despues_primo(Tlista* x/*,Tlista* y*/){
	Tlista aux,corrimiento;
	int b=0,c=1;
	Telem elem;
	corrimiento=*x;
	while(corrimiento!=NULL && b==0){
		if(es_primo(corrimiento->ent)==1){
			/*(*y)->sig=corrimiento->sig;
			corrimiento->sig=*y;
		    */
			if(c==1){
				elem=promedio_num_par(*x);
				aux=nuevo_nodo(elem);
				aux->sig=corrimiento;
				*x=aux;
			}
			else{
			elem=promedio_num_par(*x);
			aux=nuevo_nodo(elem);
			aux->sig=corrimiento->sig;
			corrimiento->sig=aux;
			b=1;
			}
		}
		else{
		   corrimiento=corrimiento->sig;
		c++;
		}
	}
}
///-------------------------------------------------
int promedio_num_par(Tlista x){
	int cont_par=0, cont_tam=0;
	while(x!=NULL){
		cont_tam++;
		if(es_par(x->ent)==1)
			cont_par++;
		x=x->sig;
	}
	if(cont_tam!=0){
		cont_par*=100;
		cont_par=cont_par/cont_tam;
	}
	//else printf("lista vacia\n");
	return cont_par;
}
///---------------------------------------
int lista_vacia(Tlista x){
	if(x==NULL)
		return 1;
	else 
		return 0;
}
