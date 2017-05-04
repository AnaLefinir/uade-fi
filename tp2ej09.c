/*
Una inmobiliaria paga a sus vendedores un salario de $800, más una comisión de
$50 por cada venta realizada, más el 5% del valor de esas ventas. Realizar un
programa que imprima el número del vendedor y el salario que le corresponde en
un determinado mes. Se leen el número del vendedor, la cantidad de ventas que
realizó y el valor total de las mismas.
*/
#include <stdio.h>
int main(){

	int saladiobasico=800;
	int nrovendedor=0;
	int venta=1;
	int acum=0;
	int cont=0;
	int comision1=0;
	int comision2;
	int salario;

	printf("Ingrese el numero de vendedor \n");
	scanf("%d",&nrovendedor);

	while(venta!=0){

		printf("Ingrese el importe de la venta \n");
		scanf("%d",&venta);

		acum=acum+venta;

		cont = cont +1;
		
	}

	comision1=cont*50;
	comision2=acum*5;
	comision2=comision2/100;

	salario=saladiobasico+comision1+comision2;

	printf("El vendedor %d realizo un total de %d venta/s, el salario total del mes es %d ARS \n",nrovendedor,cont,salario);

	return 0;
}