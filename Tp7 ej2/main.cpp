#include "lista_enlazada.h"
#include <ctype.h>

int menu(void);

int main (void){
	char m;
	Tlista lista;
	int b=0,promedio_par;
	lista=inicializar();
	do{
		system("cls");
		m=menu();
		switch(m){
		case 'a': case 'A':
			cargar_inicio(&lista);
			break;
		case 'b': case 'B':
			cargar_final(&lista);
			break;
		case 'C': case'c':
			if(lista_vacia(lista)!=1){
			promedio_par=promedio_num_par(lista);
			b=1;
			printf("el porcentaje del numero par es:%d%\n",promedio_par);
		}
			else
			   printf(MLV);
			break;
		case 'd': case 'D':
			if(lista_vacia(lista)!=1){
				if(b!=0){
					cargar_despues_primo(&lista);
				}
				else
				   printf("promedio no fue cargado\n");
			}
			else printf(MLV);
			break;
		case 'e': case 'E':
			mostrar_lista(lista);
			break;
		}
		system("pause");
	} while(m!='s' && m!='S');
	m=menu();
	

	
	return 0;
}


int menu (void){
	char x;
	do{
		system("cls");
		printf("INGRESE UNA OPCION\n"
			   "A)cargar inicio \n"
			   "B)cargar final\n"
			   "C)calcular promedio numeros pares\n"
			   "D)insertar despues del primer primo, el promedio numeros pares\n"
			   "E)mostrar lista\n"
			   "S)salir: \n ");
		x=tolower(getche());
	}while(x!='a' && x!='A' && x!='b' && x!='B' && x!='c' && x!='C' && x!='d' && x!='D' && x!='e' && x!='E' && x!='s' && x!='S');
		printf("\n");
		return x;
}
