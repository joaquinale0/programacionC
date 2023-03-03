#include "Lista.h"

Tlista inicializar (void){
	Tlista lis;
	lis.tam = 0;
	return lis;
}
void cargar_lista(Tlista* lis, int tam){
	if(tam > 1){
		cargar_lista(lis, tam-1);
	}
	lis->vec[tam] = crear_cliente();
	lis->tam++;
}
void mostrar_lista(Tlista lis,int tam){
	if(tam > 1){
		mostrar_lista(lis, tam-1);
	}
	mostrar_cliente(lis.vec[tam]);
}
	
int BBR (Tlista lis, int ini, int fin, float bus){
	int med;
	med = (ini + fin) / 2;
	if(ini <= fin){
		if(devolver_saldo(lis.vec[med]) == bus){
			return med;
		}
		else{
			if(bus < devolver_saldo(lis.vec[med])){
				return BBR(lis, ini, med-1, bus);
			}
			else{
				return BBR(lis, med+1, fin, bus);
			}
		}
	}
	else{
		return -1;
	}
}
void q_sort(Tlista* Tlis, int ini, int fin){
		int izq, der, med;
		float piv;
		Tlista aux;
		
		
		if(ini < fin){
			aux.vec[1] = Tlis->vec[ini];
			
			piv = devolver_saldo(Tlis->vec[ini]);
			izq = ini;
			der = fin;
			while(izq < der){
				while(der > izq && devolver_saldo(Tlis->vec[der]) > piv){
					der--;}
				if(der > izq){
					Tlis->vec[izq] = Tlis->vec[der];
					izq++;}
				while(izq < der && devolver_saldo(Tlis->vec[izq]) < piv){
					izq++;}
				if(izq < der){
					Tlis->vec[der] = Tlis->vec[izq];
					der--;}
			}
			Tlis->vec[der] = aux.vec[1];
			med = der;
			q_sort(Tlis, ini, med-1);
			q_sort(Tlis, med+1, fin);
		}
	}

int devolver_tamano(Tlista Tlis){
	return Tlis.tam;
}
void mostrar_uno_lista(Tlista Tlis, int pos){
	if(pos != -1){
		mostrar_cliente(Tlis.vec[pos]);
	}
	else{
		printf("No se encontro en la lista\n");
	}
	
}
void cargar_deudores(Tlista* TlisDeudor, Tlista Tlis, int tam){
	if(tam > 1){
		cargar_deudores(TlisDeudor, Tlis, tam-1);
	}
	if(devolver_saldo(Tlis.vec[tam]) < 0){
		TlisDeudor->tam++;
		TlisDeudor->vec[TlisDeudor->tam] = Tlis.vec[tam];
	}
}

void m_sort(Tlista* v, int ini, int fin){
	int m;
	if(ini < fin){
		m = (ini + fin) / 2;
		m_sort(v, ini, m);
		m_sort(v, m+1, fin);
		marge(v, ini, m, fin);
	}
}
void marge(Tlista* v, int ini, int m, int fin){
	Tlista aux;
	
	int i,j,k,t;
	i = ini;
	j = m+1;
	k = 0;
	while(i <= m && j <= fin){
		k++;
		if(devolver_saldo(v->vec[i]) < devolver_saldo(v->vec[j]) ){
			aux.vec[k] = v->vec[i]; 
			i++;
		}
		else{
			aux.vec[k] = v->vec[j];
			j++;
		}
	}
	
	for(t = i; t <= m ; t++ ){
		k++;
		aux.vec[k] = v->vec[t];
	}
	for (t = j ; t <= fin ; t++){
		k++;
		aux.vec[k] = v->vec[t];
	}
	
	for(t = 1; t <= k ; t++){
		v->vec[ini + t - 1] = aux.vec[t];
	}
}
