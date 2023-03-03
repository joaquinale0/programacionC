#include "lista.h"


int menu (void);

int main (void){
	int m, n;
	Tlista var;
	var = inicializar();
	printf("ingresar cantidad de atenciones\n");
	scanf("%d",&n);
	ordenar_dni(&var);
	do{
		m = menu();
		switch(m){
		case 1:
			mostrar_lista_mes(var);
			break;
		case 2: 
			mostrar_lista_dni(var);
			break;
		}
	} while(m != 0);
	return 0;
}
	
	
	int menu (void){
		int m;
		do{
			printf("Ingrese\n1) Dado un mes cantidad de paciente segun especialidades\n2)mostrar todas las atenciones de un paciente, dado su DNI \n0) Salir\n");
			scanf("%d",&m);
		} while(m<0 || m>2);
		return m;
	}
		
