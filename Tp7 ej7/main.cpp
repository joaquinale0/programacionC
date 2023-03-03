#include "lista.h"
//#include <ctype.h>
#include <conio.h>

int menu(void);
///-------------------------------------------
int main (void){
	Tlista lista;
	char m;
	int opc,uso_hab,cant=0;
	lista=inicializar();
	do{
		system("cls");
		m=menu();
		switch(m){
		case 'a': case 'A':
			cant++;
			cargar_lista(&lista,cant);
			break;
		case 'b': case 'B':
			if(lista_vacia(lista)!=1){
			opc=0;
			mostrar_lista(lista,opc);
			printf("ingrese numero hababitacion para ocuparla\n");
			scanf("%d",&uso_hab);
			ocupar_habitacion_lista(&lista,uso_hab);
			}
			else
			   printf(MLV);
			break;
		case 'c': case 'C':
			if(lista_vacia(lista)!=1){
			opc=1;
			mostrar_lista(lista,opc);
			printf("ingrese numero hababitacion para desocupar\n");
			scanf("%d",&uso_hab);
			desocupar_habitacion_lista(lista,uso_hab);
			}
			else
			   printf(MLV);
			break;
		}
		system("pause");
	} while(m!='s' && m!='S');
	
	return 0;
}
///-------------------------------------------
int menu(void){
	char x;
	do{
		printf("ELIJA UNA OPCION\n"
			   "A)agregar una habitacion\n"
			   "B)ocupar habitacion\n"
			   "C)desocupar habitacion\n"
			   "S)salir\n");
		x=getche();
		printf("\n");
	} while(x!='a' && x!='A' && x!='b' && x!='B' && x!='c' && x!='C' && x!='s' && x!='S');
	return x;
}
