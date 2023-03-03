#include "listaEnlazadas.h"


int menu(void);

int main(void){
	Tlista lista;
	int m;
	
	lista=nueva_lista();
	do{
		system("cls");
		m=menu();
		switch(m){
		case 1:
			cargar_inicio(&lista);
			break;
		case 2:
			cargar_final(&lista);
			break;
		case 3:
			if(lista_vacia(lista)!=1){
				mostrar_compro_mas(lista);
			}
			else
			   printf(MLV);
			break;
		case 4:
			if(lista_vacia(lista)!=1){
			mostrar_lista(lista);
			}
			else
			   printf(MLV);
			break;
		}
		system("pause");
	} while(m!=0);
	
	
	return 0;
}


int menu(void){
	int x;
	do{
		printf("ingrese una opcion\n"
			   "1)ingresar al inicio\n"
			   "2)ingresar al final\n"
			   "3)mostrar quien compro mas\n"
			   "4)mostra lista\n"
			   "0)salir\n");
		scanf("%d",&x);
	} while(x<0 || x>4);
	return x;
}
