#include "elemento.h"

Telemento cargar_uno(int nro){
	Telemento x;
	x.nro_hab=nro;
	do{
		system("cls");
		printf("ingrese tipo de habitacion\n"
			   "1)Single\n"
			   "2)Doble\n"
			   "3)Triple\n"
			   "4)Cuadruple\n");
		scanf("%d",&x.tipo_hab);
	} while(x.tipo_hab<1 || x.tipo_hab>4);
	x.dni=0;
	return x;
}
void mostrar_uno(Telemento x){
	printf("Nro de habitacion:%d \n",x.nro_hab);
	printf("Es una habitacion ");
	switch(x.tipo_hab){
	case 1:
		printf("Single \n");
		break;
	case 2:
		printf("Doble \n");
		break;
	case 3:
		printf("Triple\n");
		break;
	case 4:
		printf("Cuadruple\n");
		break;
	}
	if(x.dni!=0){
		printf("Esta hospedado con DNI:%ld\n",x.dni);
	}
	else
	   printf("No hay nadie hospedado\n");
}
void ocupar_habitacion(Telemento* x){
	printf("Ingrese DNI del ocupante de la habitacion\n");
	scanf("%ld",&x->dni);
}
void desocupar_habitacion(Telemento* x){
	x->dni=0;
}
int retornar_hab(Telemento x){
	return x.nro_hab;
}
long retornar_dni(Telemento x){
	return x.dni;
}
