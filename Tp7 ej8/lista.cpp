#include "lista.h"

Tlista inicializar(void){
	Tlista x;
	x=NULL;
	return x;
}
Tlista nuevo_nodo(Telemento e){
	Tlista x;
	x=(Tlista) malloc(sizeof(Tnodo));
	x->lista=e;
	x->sig=NULL;
	return x;
}
void agregar_lista(Tlista* x,int nro){
	Tlista aux,corr;
	corr=*x;
	Telemento elem;
	elem=cargar_uno(nro);
	aux=nuevo_nodo(elem);
	if(corr!=NULL){
		while(corr->sig!=NULL){
			corr=corr->sig;
		}
		corr->sig=aux;
	}
	else
	   *x=aux;
}
void mostrar_lista(Tlista x){
	while(x!=NULL){
		printf("\n---------------------------------------------------\n");
		mostrar_uno(x->lista);
		printf("---------------------------------------------------\n");
		x=x->sig;
	}
}
int lista_vacia(Tlista x){
	if(x==NULL)
		return 1;
	else return 0;
}
int mostrar_habitaciones_libres(Tlista x){
	int hab;
	printf("\n\nHabitaciones Disponibles\n");
	while(x!=NULL){
		if(retornar_dni(x->lista)==0){
			printf("Habitacion Nro:%d\n",retornar_nro_hab(x->lista));
		}
		x=x->sig;
	}
	printf("\nElegir una habitacion\n");
	scanf("%d",&hab);
	return hab;
}
void ocupar_habitacion_lista(Tlista x,int opc,int nro){
	int b=0;
	long dni=0;
	while(x!=NULL && (b==0 || b==2)){
		if(retornar_nro_hab(x->lista)==nro){
			b=1;
			printf("Ingrese su DNI\n");
			scanf("%ld",&dni);
			modificar_habitacion(&x->lista,opc,dni);
		}
		b=2;
		x=x->sig;
	}
	if(b==2){
		printf("\nEl numero de habitacion elejido no existe\n");
	}
}
void mostrar_si_existe_dni(Tlista x,long dni){
    int b=0;
	while(x!=NULL && b==0){
		if(retornar_dni(x->lista)==dni){
			b=1;
		}
		x=x->sig;
	}
	if(b==1)
		  printf("si existe el dni ingresado\n");
	else printf("no existe el dni ingresado");
}
void mostrar_si_existe_nro(Tlista x,int nro){
	int b=0;
	while(x!=NULL && b==0){
		if(retornar_nro_hab(x->lista)==nro)
			b=1;
		x=x->sig;
	}
	if(b==1)
		  printf("si existe el numero de habitacion ingresado\n");
	else printf("no existe el numero de habitacion ingresado");
}
long retornar_dni_lista (Tlista x,int nro){
	long dni;
	int b=0;
	while(x!=NULL && b==0){
		if(retornar_nro_hab(x->lista)==nro){
			b=1;
			dni=retornar_dni(x->lista);
		}
		x=x->sig;
	}
	if(b==1)
	return dni;
	else
		return -1;
}

int retornar_habitacion_asignada(Tlista x,long dni){
	int b=0,hab;
	while(x!=NULL && b==0){
		if(retornar_dni(x->lista)==dni){
			b=1;
			hab=retornar_nro_hab(x->lista);
		}
		x=x->sig;
	}
	if(b==1)
		return hab;
	else
		return 0;
}
void elminar_habitacion_lista(Tlista* x,int nro){
	Tlista corrimiento,anterior;
	int b=0,c=1;
	corrimiento=*x;
	anterior=*x;
	while(corrimiento!=NULL && b==0){
		if(retornar_nro_hab(corrimiento->lista)==nro){
		    if(c!=1){
				anterior->sig=corrimiento->sig;
			    b=1;
			}
			else{
			   b=1;
			   *x=(*x)->sig;
			}
		}
		corrimiento=corrimiento->sig;
		 if(c!=1) anterior=anterior->sig;
		c++;
	}
	if(b==1)
		  printf(EXITO);
	else
		printf("no existe esa habitacion\n");
}
int retornar_tamanio(Tlista x){
	int c=0;
	while(x!=NULL){
		c++;
		x=x->sig;
	}
	return c;
}
Telemento retornar_habitacion_lista(Tlista x,int pos){
	int i=1;
	while(i<pos){
		x=x->sig;
		i++;
	}
	return x->lista;
}
/*
void cargar_final(Tlista* x){
	Tlista aux,corr;
	Telemento elem;
	corr=*x;
	elem=cargar_uno();
	aux=nuevo_nodo(elem);
	if(corr!=NULL){
		while(corr->sig!=NULL)
			corr=corr->sig;
		corr->sig=aux;
	}
	else
	   *x=aux;
}*/
