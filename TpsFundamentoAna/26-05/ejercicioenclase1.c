#include <std.h>

/*
    Cargar un vector de 5 posiciones con ingreso de datos por teclado y el ingreso termina cuando se ingresa -1.
*/

int main ()
{
    int A[5];
    int valor = 0;
    int i = 0;

    scanf("%d", &valor);
    while(valor != -1 && i < 5)
    {
        A[i] = valor;
        i = i + 1;
        scanf("%d", &valor);
    }

    return 0;
}