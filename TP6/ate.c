#include "ate.h"

void leecad (Tcad x){
	int i=0, n = tamCad;
	char c;
	fflush(stdin);
	while(i < n-1 && ((c = getchar()) != EOF) && c != '\n'){
		x[i] = c;
		i++;
	}
	x[i]= '\0';
	if(c != EOF && c != '\n'){
		while(((c = getchar()) != EOF) && c != '\n');
	}
}

Tatencion crearUno (void){
	Tatencion var;
	printf("Ingrese dni : ");
	scanf("%ld", &(var.dni));
	printf("Ingrese dia Ej- A12: ");
	scanf("%d", &(var.fecha.dia));
	printf("Ingrese mes Ej- 5: ");
	scanf("%d", &(var.fecha.mes));
	printf("Ingrese anio Ej- 2020: ");
	scanf("%d", &(var.fecha.anio));
	var.especialidad = elegirEspecialidad();
	return var;
}
	
int elegirEspecialidad(void){
	int esp;
	do{
		printf("Escribir\n1)Clinico\n2)Traumatologia\n3)Oftalmologo\n");
		scanf("%d",&esp);
	} while(esp < 1 || esp > 3);
	return esp;
}
void mostrarUno (Tatencion var){
	printf("DNI : %ld \n", var.dni);
	printf("Fecha: %d/%d/%d \n", var.fecha.dia, var.fecha.mes, var.fecha.anio);
	printf("Especialidad de la atencion: %d \n--------------------\n",var.especialidad);
}

long devolverDni (Tatencion x){
	return x.dni;
}

int compararEspecialidad (Tatencion x, int y){
	if(x.especialidad == y){
		return 1;
	}
	else{
		return -1;
	}
}
