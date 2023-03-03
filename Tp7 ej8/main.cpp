#include "lista.h"

int menu(void);

int main(void){
	Tlista lista=NULL;
	Telemento aux;
	int m,nro_hab=0,nro,opc,tam,pos; 
	long dni;
	///opc: segun sea para desocupar o ocupar la habitacion.   
	///nro: Es el NRO de habitacion ah cual modificar  ///
	/// nro_hab: Es la cantidad de habitaciones que hay /// m: Es la opcion del menu 
	do{
		system("cls");
		m=menu();
		switch(m){
		case 1:
			if(lista==NULL){
				lista=inicializar();
				printf(EXITO);
			}
			else
			   printf("lista ya fue cargada\n");
			break;
		case 2:
			    nro_hab++;
				agregar_lista(&lista,nro_hab);
				printf(EXITO);
			break;
		case 3:
			if(lista_vacia(lista)!=1){
				opc=1;
				nro=mostrar_habitaciones_libres(lista);
				ocupar_habitacion_lista(lista,opc,nro);
			}
			else printf(MLV);
			break;
		case 4:
			if(lista_vacia(lista)!=1){
				mostrar_lista(lista);
			}
			else printf(MLV);
			break;
		case 5:
			if(lista_vacia(lista)!=1){
			printf("Ingrese su DNI:\n");
			scanf("%ld",&dni);
			mostrar_si_existe_dni(lista,dni);
			}
			else printf(MLV);
			break;
		case 6:
			if(lista_vacia(lista)!=1){
				printf("Ingrese un numero de habitacion\n");
				scanf("%d",&nro);
				mostrar_si_existe_nro(lista,nro);
				printf(EXITO);
			}
			else printf(MLV);
			break;
		case 7:
			if(lista_vacia(lista)!=1){
				printf("Ingrese un numero de habitacion\n");
				scanf("%d",&nro);
				dni=retornar_dni_lista(lista,nro);
				if(dni!=-1){
					if(dni!=0)
					printf("El DNI que ocupa esa habitacion es:%ld \n",dni);
					else printf("La habitacion no esta ocupada\n");
				}
				else printf("No existe esa habitacion\n");
			}
			else printf(MLV);
			break;
		case 8:
			if(lista_vacia(lista)!=1){
				printf("Ingrese su DNI:\n");
				scanf("%ld",&dni);
				nro=retornar_habitacion_asignada(lista,dni);
				if(nro!=0){
					printf("El dni ingresado esta ocupando la habitacion:%d\n",nro);
				}
				else printf("No existe el dni ingresado\n");
			}
			else printf(MLV);
			break;
		case 9:
			if(lista_vacia(lista)!=1){
				printf("Ingrese un numero de habitacion\n");
				scanf("%d",&nro);
				elminar_habitacion_lista(&lista,nro);
			}
			else printf(MLV);
			break;
		case 10:
			if(lista_vacia(lista)!=1){
				do{
					system("cls");
					tam=retornar_tamanio(lista);
					printf("INGRESE UN NUMERO\n DE 1 al %d\n",tam);
					scanf("%d",&pos);
				} while(pos<1 || pos>tam);
				aux=retornar_habitacion_lista(lista,pos);
				mostrar_uno(aux);
				printf("\n");
				printf(EXITO);
			}
			else printf(MLV);
			break;
		case 11:
			if(lista_vacia(lista)!=1){
				tam=retornar_tamanio(lista);
				printf("El tamaño de la lista es:%d\n",tam);
				printf("\n");
			    printf(EXITO);
			}
			else printf(MLV);
			break;
		}
		system("pause");
	} while(m!=0);
	
	return 0;
}



int menu(void){
	int opc;
	do{
		printf("ELEGIR UNA OPCION\n"
			  "1) Crear una lista vacía\n"
			  "2) Dado un número de habitación, agregar al inicio de la lista la nueva habitación con DNI en 0\n"
			  "3) Dado un número de habitación y un DNI  asignar el DNI a la habitación\n"
			  "4) Mostrar las habitaciones \n"
			  "5) Dado un DNI, indicar si pertenece a la lista\n"
			  "6) Dado un número de habitación, indicar si pertenece a la lista\n"
			  "7) Dado un número de habitación retornar el DNI asignado\n"
			  "8) Dado un número de DNI retornar la habitación asignado\n"
			  "9) Dado un número de habitación, eliminar la habitación de la lista\n"
			  "10) Retornar la habitación de una determinada ubicación en la lista\n"
			  "11) Retornar el tamaño de la lista de habitaciones\n"
			  "0) salir\n");
	scanf("%d",&opc);
	} while(opc<0 || opc>11);
	return opc;
}
