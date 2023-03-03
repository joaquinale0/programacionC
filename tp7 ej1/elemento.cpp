#include "elemento.h"

Telemento carga_uno(void){
	Telemento x;
	printf("ingrese el id de la fabrica con numeros\n");
	scanf("%ld",&x.idfabrica);
	printf("ingrese el nombre de la fabrica\n");
	leecad(x.nombre,tam_cad);
	printf("ingrese cantidad de unidades compradas\n");
	scanf("%d",&x.cantidad);
	printf("ingrese el precio unitario\n");
	scanf("%d",&x.precio);
	return x;
}
void mostrar_uno(Telemento x){
	printf("-----------------------------------------\n");
	printf("\nID Fabrica:%ld \nNombre de la fabrica:%s\n",x.idfabrica,x.nombre);
	printf("Unidades compradas:%d\t\tPrecio unidad:%d\n",x.cantidad,x.precio);
	printf("\n-----------------------------------------\n");
}
int retorna_cantidad(Telemento x){
	return x.cantidad;
}
