#include <std.h>

/*
    Generar numeros impares y que sean multiplos de tres a través de un contador que avanze de 1 en 1. Cargar con ellos un vector de 30 posiciones.
    Ingresar un valor por teclado y determinar si ese valor existe con la busqueda binaria. Si el valor se encuentra, eliminarlo del vector, sino
    informarlo.
*/

int main ()
{
    int vector[30];
    int valor = 0;
    int pos = -1;
    int izq = 0;
    int der = 29;
    int medio = 0;
    int i = 0;
    int num = 0;

    while(i < 30)
    {   
        if (num % 2 == 0 && num % 3 == 0)
        {
            vector[i] = num;
            i = i + 1; 
        }

        num = num + 1;
    }

    printf("Ingrese un valor a buscar");
    scanf("%d", &valor);

    while(izq <= der && pos == -1)
    {
        medio = (izq + der)/2;

        if(vector[medio] == valor)
        {   
            pos = medio;
        }
        else
        {
            if(vector[medio] < valor)
            {
                izq = medio + 1;
            }
            else
            {
                der = medio - 1;
            }
        }
    }

    if(pos == -1)
    {
        printf("El valor buscado no se encuentra");
    }
    else
    {
        for(i = pos; i < 29 ; i = i + 1)
        {
            vector[i] = vector[i+1];
        }
        vector[i] = 0;
    }

    return 0;
}