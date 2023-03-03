#include "nodo.h"

int menu (void);

int main (){
	pNodo x;
	x = inicializar();
	int m;
	do{
		m=menu();
		switch(m){
		case 1:
			cargar_nodo(&x);
			break;
		case 2:
			modificar_lista(&x);
			break;
		case 3:
			mostrar_nodo(x);
			break;
		}
	} while(m != 0);
}
int menu (void){
	int m;
	do{
		printf("1)crear habitacion\n2)seleccionar habmodif\n3)mostrar hab\n0)salir\n");
		scanf("%d",&m);
	} while(m<0 || m>3);
	return m;
}
