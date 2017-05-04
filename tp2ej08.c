/*
Un banco necesita para sus cajeros automáticos un programa que lea una cantidad
de dinero e imprima a cuántos billetes equivale, considerando que existen billetes
de $100, $50, $10, $5 y $1. Desarrollar dicho programa de tal forma que se
minimice la cantidad de billetes entregados por el cajero.
*/

#include<stdio.h>

int main(){
    
    int importe =0;
    int cont100 =0;
    int cont50=0;
    int cont10=0;
    int cont5=0;
    int cont1=0;
    
    printf("Ingrese el importe \n");
    scanf("%d", &importe);
    
    while(importe>=100){
        importe=importe-100;
        cont100=cont100+1;
    }
    
    printf("Entregue %d billetes de 100 \n",cont100);
    
    while(importe>=50){
        importe=importe-50;
        cont50=cont50+1;
    }
    
    printf("Entregue %d billetes se 50 \n",cont50);
    
    while(importe>=10){
        importe=importe-10;
        cont10=cont10+1;
    }
    
    printf("Entregue %d billetes de 10 \n",cont10);
    
    while(importe>=5){
        importe=importe-5;
        cont5=cont5+1;
    }
    
    printf("Entregue %d billetes de 5 \n",cont5);
    
    while(importe>=1){
        importe=importe-1;
        cont1=cont1+1;
    }
    
    printf("Entregue %d billetes de 1 \n",cont1);
    
    return 0;
}