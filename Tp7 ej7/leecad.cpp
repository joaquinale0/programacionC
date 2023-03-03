#include "leecad.h"
#include <stdio.h>

void leecad(Tcad cadena, int tam){
	int j;
	char m;
	j=0;
	fflush(stdin);
	m=getchar();
	while(j<tam-1 && m!=EOF && m!='\n'){
		cadena[j]=m;
		m=getchar();
		j++;}
	cadena[j]='\0';
	if(m != EOF && m != '\n') /*limpia el buffer*/
		while(m!=EOF && m!='\n')
		m=getchar();
}
