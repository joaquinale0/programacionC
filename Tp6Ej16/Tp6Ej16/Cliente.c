#include "Cliente.h"

void leecad (Tcad cad, int tam){
	int i=0;
	char c;
	fflush(stdin);
	while( (i < tam-1) && (c=getchar()) != EOF  && c != '\n'){
		cad[i] = c;
		i++;
	}
	cad[i] = '\0';
	if(c != EOF && c != '\n'){
		while((c=getchar()) != EOF  && c != '\n');
	}
}
cliente crear_cliente (void){
	cliente persona;
	printf("Ingresar Apellido:\n");
	leecad(persona.apellido, tamCad);
	printf("Ingresar Nombre:\n");
	leecad(persona.nombre, tamCad);
	printf("Ingresar DNI:\n");
	scanf("%ld", &persona.dni);
	printf("Ingrese saldo:\n");
	scanf("%f", &persona.saldo_cuenta );
	
	return persona;
}
void mostrar_cliente (cliente per){
	printf("---------------\nApellido: %s \nNombre: %s\nDNI: %ld\nSaldo: %f\n---------------\n",per.apellido,per.nombre,per.dni,per.saldo_cuenta);
}
float devolver_saldo (cliente per){
	return per.saldo_cuenta;
}
