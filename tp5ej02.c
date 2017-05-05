/*
Dados dos parámetros enteros A y B, obtener AB (A elevado a la B), utilizando la función del
ejercicio 1.
*/
#include <stdio.h>

int multiplicacion(int a, int b);

int main(){

	int a=0;
	int b=0;
	int i=0;
	int potencia=0;

	printf("Ingrese A \n");
	scanf("%d",&a);

	printf("Ingrese B \n");
	scanf("%d",&b);

	for(i=1;i<=b;i=i+1){
		potencia=multiplicacion(a,b);
	}

	printf("El resultado es %d \n",potencia);


	return 0;
}

int multiplicacion(int a, int b){

	int resultado;
	int i;

	for(i=1;i<=b;i=i+1){
		resultado=resultado+a;
	}

	return resultado;

}