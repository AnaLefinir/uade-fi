#include <std.h>

/*
    Devolver el máximo valor de un arreglo de 100 elementos enteros. ¿Cómo cambiaría la
solución si el arreglo estuviera ordenado? 
Rta: Si estuviera ordenado, depende si fuera de mayor a menor o de menor a mayor. Seleccionaria 
en el primer caso el primer elemento y en el segundo caso el ultimo elemento.
*/

int main ()
{
    int A[100];
    int max = 0;

    for(i = 0; i < 100; i = i + 1)
    {
        if(max < A[i])
        {
            max = A[i];
        }
    }


    return 0;
}