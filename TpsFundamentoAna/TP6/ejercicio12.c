#include <std.h>

/*
    Dado un arreglo A de 100 elementos enteros y un entero E, escribir un programa que indique
la posición en que se encuentra el entero E dentro del arreglo. Imprimir un mensaje de error
en caso de no encontrarse. (Supongo que esta ordenado de forma ascendente por lo dicho en el ejercicio 13).
*/

int main ()
{
    int A[100];
    int E = 25;
    int izq = 0;
    int der = 99;
    int pos = -1;
    int medio = 0;

    while(izq <= der && pos == -1)
    {
        medio = (izq + der) / 2;

        if(A[medio == E])
        {
            pos = medio;
        }
        else
        {
            if(A[medio] < E)
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
        printf("El número no se encuentra");
    }
    else
    {
        printf("El número se encuentra en la posición %d", pos);
    }

    return 0;
}