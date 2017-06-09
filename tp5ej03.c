#include <stdio.h>
/*
Verificar si un número es par o impar, devolviendo 1 o 0 respectivamente.
*/
int verificar(int a);


int main(){

	int numero=0;
	int check;


	printf("Ingrese un numero \n");
	scanf("%d",&numero);

	check=verificar(numero);

	if(check==0){
		printf("El numero es impar \n");
	}else{
		printf("El numero es par \n");
	}

	return 0;

}

int verificar(int a){

	if(a%2==0){

		return 1;

	}else{
		return 0;
	}
}
