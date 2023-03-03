#include "Lista.h"

int menu (void);

int main (void){
	int m, n;
	Tlista lista,deudores;
	float busqueda;
	
	printf("Ingresar cantidad de clientes:\n");
	scanf("%d",&n);
	lista = inicializar();
	deudores = inicializar();
	
	cargar_lista(&lista, n);
	//q_sort(&lista, 1, devolver_tamano(lista));
	m_sort(&lista, 1, n);
	
	cargar_deudores(&deudores, lista, devolver_tamano(lista));
	q_sort(&deudores, 1, devolver_tamano(deudores));
	do{
		m = menu();
		switch(m){
		case 1:
			mostrar_lista(lista, devolver_tamano(lista));
			break;
		case 2:
			mostrar_lista(deudores, devolver_tamano(deudores));
			break;
		case 3:
			printf("Ingresar Saldo Busqueda:\n");
			scanf("%f",&busqueda);
			mostrar_uno_lista(lista, BBR(lista, 1, devolver_tamano(lista), busqueda));
			break;
		}
	} while(m != 0);
	return 0;
}

int menu (void){
	int m;
	do{
		printf("Ingrese una opcion\n1)ver Todos clientes\n2)Ver lista deudores\n3)Ver deudor segun saldo\n0)Salir:\n");
		scanf("%d",&m);
	} while(m > 3 || m < 0);
	return m;
}
	
