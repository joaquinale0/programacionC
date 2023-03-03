#include "elemento.h"


Telemento cargar_uno(int nro){
	Telemento x;
	x.nro_hab=nro;
	x.dni=0;
	return x;
}
void mostrar_uno(Telemento x){
	printf("Habitacion Nro:%d \n",x.nro_hab);
	if(x.dni==0)
		printf("la habitacion esta desocupada\n");
	else
		printf("la habitacion esta ocupada\n");
}
int retornar_dni(Telemento x){
	return x.dni;
}
int retornar_nro_hab(Telemento x){
	return x.nro_hab;
}
void modificar_habitacion(Telemento* x,int opc,int dni){
	if(opc==1){
		x->dni=dni;
		printf("Fue cargada exitosamente\n");
	}
	else
	   {
		printf("Se ah desocupado exitosamente\n");
		x->dni=dni;
	}
}
