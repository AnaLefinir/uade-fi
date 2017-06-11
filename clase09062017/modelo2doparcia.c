/*

Modelo 2do parcial

Nota: Falta crear la funcion factoria

*/

#include <stdio.h>

int main(){

	int i=0;
	int fibo[50]=0;
	int c=0;
	int k=0;
	int valor=0;

for(i=2;i<30;i=i+1){
	
	c= fibo[i-1]+fibo[i-2];

	fibo[i]=factoria(c);

}

int i=0;

scanf("%d",&valor);

while(valor>fibo[i]){

	i=i+1;

}

for(k=30;k>=i;k=k-1){
	fibo[k]=fibo[k-1];
}

fibo[k]=valor;
int valor=0;

scanf('%d',&valor);

int min=0;
int max=30;
int pos=-1; //arranca en un valor no valido como posicion del verctor

while(min<=max&&pos==-1){
	
	med=min+max/2;

	if(fibo[med]==valor){

		pos=med;

	}else{

		if(fibo[med]<valor){
			min=med+1;
		}else{
			max=med-1;
		}

	}

}

if(pos==-1){
	printf("No se encuentra el valor en el vector");
}else{
	printf("%d",pos);
}

return 0;

}

