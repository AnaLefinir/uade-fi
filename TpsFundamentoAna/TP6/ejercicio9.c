#include <std.h>

/*
    Idem anterior, utilizando búsqueda binaria sobre un arreglo ordenado.
*/

int main ()
{
    int A[100];
    int valor = 0;
    int pos = -1;
    int izq = 0;
    int der = 99;
    int medio = 0;

    printf("Ingresar un valor a buscar");
    scanf("%d", &valor);

    while(izq <= der && pos == -1)
    {
        medio = (izq + der) / 2;

        if(A[medio == valor])
        {
            pos = medio;
        }
        else
        {
            if(A[medio] < valor)
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
        printf("El valor no se encuentra");
    }
    else
    {
        printf("El valor se encuentra en la posición %d", pos);
    }

    return 0;
}