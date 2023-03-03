#include "lista.h"

Tlista inicializar (void){
	Tlista x;
	x.tam = 0;
	return x;
}
	void cargar_lista (Tlista* x, int i){
		if(i > 1){
			cargar_lista(x, i-1);
		}
		x->tam = i;
		x->lista[i] = crearUno();
	}
		void mostrar_lista_mes (Tlista x){
			Tcad cadena;
			int i,spc,mm,cont = 0;
			spc = elegirEspecialidad();
			printf("Ingrese mes del 1-12: ");
			scanf("%d", &mm);
			for(i=0;i<x.tam;i++){
				if(compararEspecialidad(x.lista[i], spc) == 1){
					cont++;
				}
			}
			devolverEspecialidad(cadena, spc);
			printf("En el mes: %d \nLa cantidad de clientes: %d en  la especialidad: %s\n",mm,cont,cadena);
		}
			void ordenar_dni (Tlista* x){
				q_sort(x->lista,1,x->tam);
			}
				void q_sort (vecTatencion x, int ini, int fin){
					vecTatencion piv;
					int izq,der,med;
					
					if(ini < fin){
						izq = ini;
						der = fin;
						piv[0] = x[ini];
						while(izq < der){
							while(izq < der && devolverDni(x[izq]) < devolverDni(piv[0])){
								izq++;
							}
							if(izq < der){
								x[der] = x[izq];
								der--;
							}
							while(der > izq && devolverDni(x[der]) > devolverDni(piv[0])){
								der--;
							}
							if(der > izq){
								x[izq] = x[der];
								izq++;
							}
						}
						x[der]=piv[0];
						med = der;
						q_sort(x,ini,med-1);
						q_sort(x,med+1,fin);
					}
				}
					void mostrar_lista_dni (Tlista x){
						int i;
						long dd;
						printf("Ingresar DNI a buscar\n");
						scanf("%ld",&dd);
						for(i=0; i < x.tam; i++){
							if(devolverDni(x.lista[i]) == dd){
								mostrarUno(x.lista[i]);
							}
						}
					}
						
