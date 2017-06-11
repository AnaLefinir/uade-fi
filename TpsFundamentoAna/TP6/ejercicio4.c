#include <std.h>

/*
    Determinar si un arreglo de enteros de 50 posiciones es capicúa.

    Nota: si el arreglo es de numeros de un digito, es simple. Pero si el array tiene numeros 
    de mas de un dígito, hay que darlos vuelta primero, con la salvedad que para que funcione, 
    los digitos de la posición 0, deben ser igual a la de la posición 49. Los de la posicion 1,
    deben tener los mismos digitos que la posición 48 y asi sucesivamente. 
*/

int darvuelta (int num)
{
    int result = 0;
    int x = 0;
    
    while(num > 0)
    {
        x = num % 10;
        result = result * 10 + x;
        num = num / 10;
    }

    return result;
}

int main ()
{
    int A[50];
    int i = 0;
    int j = 49;
    int flag = -1;
    int num = 0;

    // Vector con elementos de un dígito.

    /* 
    for(i = 0; i <= j, i = i + 1)
    {
        if(A[i] != A[j])
        {
            flag = 1;
        }

        j = j - 1;
    }

    for or while

    */
    while(i <= j && flag != 1)
    {
        if(A[i] != A[j])
        {
            flag = 1;
        }

        i = i + 1;
        j = j - 1;
    }

    if(flag == -1)
    {
        printf("Es capicúa");
    }
    else
    {
        printf("No es capicúa");
    }

    /*
        Si fueran numeros de más de un digito, con la salvedad dicha anteriormente.
    

    while(i <= j && flag != 1)
    {
        num = darvuelta(A[j]);

        if(A[i] != num)
        {
            flag = 1;
        }

        i = i + 1;
        j = j - 1;
    }

    if(flag == -1)
    {
        printf("Es capicúa");
    }
    else
    {
        printf("No es capicúa");
    }
    
    */

    return 0;
}

