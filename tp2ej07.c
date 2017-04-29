/*
Ingresar tres números enteros, calcular su promedio y mostrarlo por pantalla.
*/

#include <stdio.h>

int main(){

	int num1=0;
	int num2=0;
	int num3=0;
	int acum=0;
	int promedio=0;

	printf("Ingrese tres numeros para hayar el promedio \n");

	printf("Ingresa el primer numero entero \n");
	scanf("%d",&num1);
	
	while(num1<0){
		printf("Ingresa el primer numero entero \n");
		scanf("%d",&num1);	
	}
	
	printf("Ingresa el segundo numero entero \n");
	scanf("%d",&num2);
	
	while(num2<0){
		printf("Ingresa el segundo numero entero \n");
		scanf("%d",&num2);
	}

	printf("Ingresa el tercer numero entero \n");
	scanf("%d",&num3);

	while(num3<0){
		printf("Ingresa el tercer numero entero \n");
		scanf("%d",&num3);
	}

	acum=num1+num2+num3;
	promedio=acum/3;

	printf("El promedio de los numeros ingresados es igual a %d \n",promedio);



	return 0;
}