/*
Ingresar la longitud del radio de un círculo. Calcular e imprimir:
La superficie del círculo (Sup = π * r²)
El perímetro de la circunferencia (Per = π * d)
La superficie de la esfera (Sup = 4 * π * r²)
El volumen de la esfera (Vol = 4/3 * π * r³)
*/


#include <stdio.h>
#define PI 3.141592654

int superficie(int r);
int perimetrocircunferencia(int r);
int superficiedelaesfera(int r);
int volesfera(int r);


int main(){

	int r = 0;

	printf("Ingresar el radio de un circulo \n");
	scanf("%d",&r);

	while(r<0){
		printf("El radio debe ser positivo por favor vuelva a ingresarlo \n");
		scanf("%d",&r);
	}

	printf("La superficie del circulo es: %d \n",superficie(r));
	printf("El perimetro de la circunferencia es: %d \n",perimetrocircunferencia(r));
	printf("La superficie de la esfera es: %d \n",superficiedelaesfera(r));
	printf("El volumen de la esfera es: %d \n",volesfera(r));

	return 0;
}

int superficie(int r){
	int sup;

	sup=PI*(r*r);

	return sup;

}

int perimetrocircunferencia(int r){
	int perimetro;
	int d;

	d=r*2;

	perimetro=PI*d;

	return perimetro;
}

int superficiedelaesfera(int r){

	int sup;

	sup = 4*PI*(r*r);

	return sup;

}

int volesfera(int r){
	int vol;

	vol=4/3*PI*(r*r*r);
	return vol;
}
