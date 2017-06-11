#include <std.h>

/*
    Invertir un arreglo de 30 números enteros ingresados por teclado.
*/

int main () 
{
    int A[30];
    int aux = 0;
    int i = 0;
    int j = 29;

    for(i = 0; i < 30; i = i + 1)
    {
        printf("Ingrese un número");
        scanf("%d", &A[i]);
    }

    while(i<j)
    {
        aux = A[j];
        A[j] = A[i];
        A[i] = aux;

        i = i + 1;
        j = j - 1;
    }

    return 0;
}