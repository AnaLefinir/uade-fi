#include <std.h>

/*
    Devolver la posición que ocupa un valor pasado como parámetro, utilizando búsqueda
secuencial en un arreglo desordenado de 100 enteros. Devolver -1 si no se encuentra.
*/

int main ()
{
    int A[100];
    int valor = 0;
    int pos = -1;

    printf("Ingresar un valor a buscar");
    scanf("%d", &valor);

    for(i = 0; i < 100; i = i + 1)
    {
        if(valor < A[i])
        {
            pos = i;
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