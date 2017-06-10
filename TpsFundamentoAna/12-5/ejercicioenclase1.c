#include <std.h>

/*
    Dado los vectores A y B ambos de 10 posiciones ya cargados y ordenados de manera ascendente obtener un vector C,
    de 20 posiciones también ordenado de manera ascendente.
*/

int main ()
{
    int A[10];
    int B[10];
    int C[20];
    int i = 0;
    int j = 0;
    int k = 0;

    while(i <= 9 && j <= 9)
    {
        if(A[i] < B[j])
        {
            C[k] = A[i];
            i = i + 1;
        }
        else
        {
            if(B[j] < A[i])
            {
                C[k] = B[j];
                j = j + 1;
            }
        }
        k = k + 1;
    }

    if(i > 9)
    {
        while(j<10)
        {
            C[k] = B[j];
            k = k + 1;
            j = j + 1;
        }
    }

     if(j > 9)
    {
        while(i<10)
        {
            C[k] = A[i];
            k = k + 1;
            i = i + 1;
        }
    }

    return 0;
}