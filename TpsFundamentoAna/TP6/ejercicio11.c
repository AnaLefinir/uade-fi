#include <std.h>

/*
    Leer dos vectores numéricos enteros, uno llamado A de 10 elementos y otro llamado B de
20. Se solicita generar e imprimir tres nuevos vectores C, D y E que contengan:
 La concatenación de A y B.
 La concatenación de A con el reverso de B.
 La intercalación de los elementos de A y B.
*/

int main ()
{
    int A[10];
    int B[20];
    int C[30];
    int D[30];
    int E[30];
    int j = 0;
    int i = 0;
    int k = 0;

    for (i = 0; i < 30; i = i + 1)
    {
        if (i < 10)
        {
            C[i] = A[i];
        }
        else
        {
            C[i] = B[j];
            j = j + 1;
        }
    }

    j = 29;
    for (i = 0; i < 30; i = i + 1)
    {
        if (i < 10)
        {
            D[i] = A[i];
        }
        else
        {
            D[i] = B[j];
            j = j - 1;
        }
    }

    j = 0;
    for (i = 0; i < 30; i = i + 1)
    {
        if (k < 10 && i % 2 == 0)
        {
            E[i] = A[k];
            k = k + 1;
        }
        else
        {
            E[i] = B[j];
            j = j + 1;
        }
    }

    return 0;
}