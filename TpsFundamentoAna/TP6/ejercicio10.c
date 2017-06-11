#include <std.h>

/*
    Dado un arreglo de N enteros (por ejemplo 5), devolver un arreglo de N-1 valores booleanos,
tal que cada valor de este último arreglo corresponde al resultado de la comparación de los
pares de valores consecutivos del primer arreglo. El valor booleano es un entero de valor 1 si
el primer valor del par es menor o igual que el siguiente, y 0 si no lo es.
*/

int main ()
{
    int A[5];
    int B[4];
    int i = 0;
    int j = 0;

    for (i = 0; i < 4; i = i + 1)
    {
        if (A[i] <= A[i+1])
        {
            B[j] = 1;
        }
        else
        {
            B[j] = 0;
        }
        j = j + 1;
    }

    return 0;
}