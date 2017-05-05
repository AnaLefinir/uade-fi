/*
Dados dos parámetros de tipo entero, calcular y devolver el resultado de la multiplicación de
ambos, utilizando sólo sumas.
*/

#include <stdio.h>

int multiplicacion(int a, int b);

int main(){

	int a=0;
	int b=0;

	printf("Ingrese A \n");
	scanf("%d",&a);

	printf("Ingrese B \n");
	scanf("%d",&b);

	printf("El resultado de la multiplicacion es %d \n", multiplicacion(a,b));

}

int multiplicacion(int a, int b){

	int resultado;
	int i;

	for(i=1;i<=b;i=i+1){
		resultado=resultado+a;
	}

	return resultado;

}