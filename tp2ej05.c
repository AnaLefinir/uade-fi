/*
Escribir un programa que lea la edad de una persona en años y la convierta a días,
imprimiendo el resultado. Considerar que todos los años tienen 365 días.
*/

#include <stdio.h>

int main(){

	int anios;
	int edad;

	printf("Ingresar tu edad \n");
	scanf("%d",&anios);

	edad=anios*365;

	printf("Tienes %d de edad \n",edad);


	return 0;
}