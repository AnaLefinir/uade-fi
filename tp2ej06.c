/*
Leer una medida en metros e imprimir esta medida expresada en centímetros,
pulgadas, pies y yardas. Los factores de conversión son:

1 pie = 12 pulgadas.
1 yarda = 3 pies.
1 pulgada = 2,54 cm.
1 metro = 100 cm.
*/

int tocentimetros(int m);
int topulgada(int m);
int topie(int m);
int toyarda(int m);

#include <stdio.h>

int main(){

	int medida;
	int centimetros;
	int pulgadas;
	int pies;
	int yarda;

	printf("Ingresar el valor en metros \n");
	scanf("%d",&medida);

	centimetros=tocentimetros(medida);
	pulgadas=topulgada(centimetros);
	pies=topie(pulgadas);
	yarda=toyarda(pies);

	printf("%d metros equivale a %d pies \n", medida,pies);
	printf("%d metros equivale a %d yardas \n", medida,yarda);
	printf("%d metros equivale a %d pulgadas \n",medida,pulgadas);
	printf("%d metros equivale a %d cm \n",medida,centimetros);
	
	return 0;
}

int tocentimetros(int m){

	int cm;

	cm = m * 100;

	return cm;
}

int topulgada(m){
	int pulgada;

	pulgada=m/2.54;

	return pulgada;
}
int topie(int m){
	int pie;

	pie = m / 12;

	return pie;
}
int toyarda(int m){
	int yarda;

	yarda=m/3;

	return yarda;
}
