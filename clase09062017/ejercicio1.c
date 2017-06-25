/*
Cargar un vector a[] con los valores que salieron en 30 tiradas de ruleta.
Informar:
Cantidad de veces que salio el numero 0.
Porcentaje de veces que salio la primer docena.
Copiar los 20 primeros valores a un vector b[] y ordenarlos de menor a mayor por el metodo de seleccion.
Ingresar un valor y eliminarlo de b[] si se encuentra corriendo los valores restantes hacia adelante.
Cargar el vector a[] con valores no repetitivos.


Logica:

a{5,15,23,8,9,0,11,...}
b{15,18,3,4,1,13,...}

Primero recorrer el vector para verificar si el valor ingresado se encuentra si no se encuentra
es necesario correr el puntero

*/

#include <stdio.h>

int main(){

	int a[30];
	int b[20];
	int valor=0;
	int flag=-1;
	int pos=0;
	int i=0;
	int j=0;
	int tirados=0;
	int contceros=0;
	int doc1=0;
	int aux=0;

	for(i=0;i<30;i=i+1){
		a[i]=-1;
	}

	scanf("%d",&valor);

	if(valor==0){
		contceros=contceros+1;
	}
	if(valos>=1&&valor<=12){
		doc1=doc1+1;
	}

	while(tirados<30){
	
	for(i=0;i<30;i=i+1){
		if(valor==a[i]){
			flag=1;
		}
	}
	if(flag==1){
		a[pos]=valor;
		pos=pos+1;
	}

	flag=-1;
	tirados=tirados+1;

	}

	/*
	Copia los 20 elementos de a[] en b[]
	*/

	for(i=0;i<20;i=i+1){
		b[i]=a[i];
	}

	/*
	Ordena B
	*/

	for(i=0;i<19;i=i+1){

		for(j=1;j<=19;j=j+1){

			if(b[i]>b[j]){

				aux=b[j];
				b[j]=b[i];
				b[i]=aux;
			}
		}
	}

	scanf("%d",&valor);

	/*
	Busca y encuentra
	*/

	while(valor!=b[i]&&i<20){
		i=i+1;
	}
	if(valor==b[i]){

		/*
		Elimina el valor
		*/

		for(j=i;j<=19;j=j+1){
			b[j]=b[j+1];
		}

		b[j]=-1;

	}else{
		printf("No esta!");
	}


	return 0;
}