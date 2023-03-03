#include "habitacion.h"
Thabitacion crear_uno (){
	Thabitacion x;
	printf("tipo hab;\n");
	scanf("%d",& x.tipo);
	x.dni = 0;
	
	return x;
}
void mostrar_uno (Thabitacion x, int n){
	printf("----------\n%d)tipo hab:%d\ndni %ld\n------------\n",n,x.tipo,x.dni);
}
void modificar_uno (Thabitacion* x){
	printf("Ingrese dni:\n");
	scanf("%ld",& x->dni);
}
