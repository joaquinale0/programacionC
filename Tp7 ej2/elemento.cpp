#include "elemento.h"

Telem cargar_uno(void){
	Telem x;
	printf("ingrese un numero\n");
	scanf("%d",&x);
	return x;
}
void mostrar_uno(Telem x){
	printf("numero:%d\n",x);
}
int retornar_num(Telem x){
	return x;
}
int es_primo(Telem x){
	int pd=2;
	while((pd<=x/2) && (x%pd!=0))
		pd=pd+1;
	if((pd>x/2) && x!=1)
		return 1;
	else
		return 0;
}
int es_par(Telem x){
	if(x%2==0)
		return 1;
	else return 0;
}
