#include <std.h>

/*
    Dado un vector de 8 posiciones, obtener la posicion de un valor ingresado por teclado e informarlo.

*/

int main ()
{
    int A[8];
    int valor;
    int izq = 0;
    int der = 7;
    int medio = 0;
    int pos = -1;

    A[0] = 2;
    A[1] = 5;
    A[2] = 8;
    A[3] = 10;
    A[4] = 11;
    A[5] = 18;
    A[6] = 20;
    A[7] = 24;

    printf("Ingrese un valor a buscar");
    scanf("%d", &valor);

    while(izq <= der && pos == -1)
    {
        medio = (izq + der)/2;

        if(A[medio] == valor)
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
        printf("El valor buscado no se encuentra");
    }
    else
    {
        printf("El valor buscado se encuentra en la posicion %d", pos);
    }

   return 0;
}