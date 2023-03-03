#ifndef CLIENTE_H
#define CLIENTE_H
#include <stdio.h>
#include <stdlib.h>

#define tamCad 30
typedef char Tcad [tamCad]; 

typedef struct{
	Tcad apellido;
	Tcad nombre;
	long dni;
	float saldo_cuenta;
}cliente;

void leecad (Tcad, int);
cliente crear_cliente (void);
void mostrar_cliente (cliente);
float devolver_saldo (cliente);

#endif
