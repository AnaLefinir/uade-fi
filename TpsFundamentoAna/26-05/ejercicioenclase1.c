#include <std.h>

/*
    1° : Cargar un vector de 5 posiciones con ingreso de datos por teclado y el ingreso termina cuando se ingresa -1.
    2° : Buscar el mayor numero dentro del vector.
    3° : Imprime el vector usando una funcion.
    4° : Eliminar el mayor.

*/

/* 3 */
void imprimir (int vector[5], int terminos)
{
    int i = 0;

    for(i = 0; i < terminos; i = i + 1)
    {
        printf("%d\n", vector[i]);
    }
}

int main ()
{
    int A[5];
    int valor = 0;
    int i = 0;
    int max = 0;
    int j = 0;
    int cant = 0;
    int k = 0;
    int pos = 0;

    /* 1 */

    scanf("%d", &valor);
    while(valor != -1 && i < 5)
    {
        A[i] = valor;
        i = i + 1;
        scanf("%d", &valor);
    }

    /* 2 */

    for (j = 0; j < i; j = j + 1)
    {
        if( max < A[j])
        {
            max = A[j];
            pos = j;
        }
    }

    /* 3 */

    imprimir(A, i);

    /* 4 */

    for(k = pos; k < i - 1; k = k + 1)
    {
        A[k] = A [k+1];
    }

    return 0;
}