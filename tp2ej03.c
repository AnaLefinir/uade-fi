/*
Desarrollar un programa que permita ingresar dos números A y B a través del
teclado. Imprimir su suma y su diferencia.
*/

#include <stdio.h>

int main(){

	int a=0;
	int b=0;
	int sum = 0;
	int dif = 0;

	printf("Ingresar A: \n");
	scanf("%d",&a);
	printf("Ingresar B: \n");
	scanf("%d",&b);

	sum = a + b;

	dif = a - b;

	printf("La suma entre A y B es %d \n", sum);
	printf("La suma entre A y B es %d \n", dif);


	return 0;
}