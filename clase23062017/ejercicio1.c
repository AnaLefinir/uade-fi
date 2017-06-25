/*

Revision de temas de examen.

Consigna: 
Dado un vector de 100 posiciones, cargarlos hasta (N - 1).


*/

#include <stdio.h>

int raix(int x);

int main()
{

	int vect[100];
	int i=0;
	int dato=0;
	int continuar = 1;
	int flag=0;

	/*

	Carga del vector

	*/

	scanf("%d",&dato);	
	
	while(i<=99){

		if(dato>0){

			vect[i]=dato;
			i=i+1;

		}

		scanf("%d",&dato);

	}

	/*

	Ordenar por metodo de burbujeo simplificado.
	Este metodo se caracteriza por utilizar una bandera.

	*/
	
	while(continuar==1){
		continuar =0;

		for(i=0;i<=99;i=i+1){

			if(vect[i]>vect[i+1]){
				aux=vect[i];
				vect[i]=vect[i+1];
				vect[i+1]=aux;
				continuar=1;
			}
		}
	}

	/*

	Ralizar la busqueda de un valor mediante busqueda 


	*/

	scanf("%d",&dato);

	while(flag==0&&i<=99){

		if(vect[i]==dato){
			flag=1;
		}else{
			i=i+1;
		}
	}

	/*

	Mostrar la posicion del valor encontrado mediante la busqueda.
	
	*/

	if(flag==1){
		for (j = i ; i < 99; i=i+1)
		{
			vect[i]=vect[i+1];
		}
		if(flag==1){
			vect[99]=-1;
		}
	}

	for(i=0;i<=99;i=i+1){
		if(raiz(vect[i])==1){

			cont=cont+1;

		}
	}

	return 0;
}

/*

Funcion para hayar raiz cuadrada.

*/

int raiz( int x){

	int i;

	while(x>0){
		x = x - i;
		i=i+2;
	}

	if(x==0){
		return 1;
	}else{
		return 0;
	}
}