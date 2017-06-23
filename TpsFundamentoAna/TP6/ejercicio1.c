#include <stdio.h>

/*
    Escribir una función para ingresar desde el teclado una serie de números reales (no más de
    50) en un arreglo. Para que se finalice la carga el usuario debe ingresar el valor -1. La
    función debe devolver un entero con la cantidad de elementos ingresados.
*/

int vectordereales ()
{
    int vector[50];
    int num = 0;
    int i = 0;
    int j = 0;
    int sum = 0;

    printf("Ingrese un valor");
    scanf("%d", &num);

    while(num != -1 && i < 50)
    {
        vector[i] = num;
        sum = sum + vector[i];
        i = i + 1;

        scanf("%d", &num);
    }
    for(j = 0; j < i; j++)
    {
        printf("%d\n", vector[j]);
    }


    return i;
}

int main()
{
    int num = vectordereales();

    return 0;
}
