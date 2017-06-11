#include <std.h>

/*
    Dado un vector A de 100 posiciones, completarlo con valores enteros y positivos. Verificar que asi sea. Una vez completado, recorrerlo y 
    aquellos valores que sean primos, copiarles a un vector B, desde la posicion 0. Una vez cargado el vector B, ordenarlo de forma ascendente, hasta la
    última posición ocupada por el método del burbujeo. Pueden quedar posiciones vacias. Ingresar un valor por teclado y buscarlo en el vector B. Si está, 
    informar su posición, sino incorporarlo donde corresponde, corriendo los siguientes valores.
*/

int main ()
{
     int A[100];
    int B[100];
    int i = 0;
    int flag = -1;
    int num = 2;
    int j = 0;
    int band = 1;
    int aux = 0;
    int valor = 0;
    int pos = 0;
    int k = 0;

    for(i = 0; i < 100; i = i + 1)
    {
        printf("Ingrese un numero mayor a 0");
        scanf("%d", &A[i]);
        while(A[i] < 0)
        {
            printf("Ingrese un numero mayor a 0");
            scanf("%d", &A[i]);
        }
    }

    for(i = 0; i < 100; i = i + 1)
    {
        while(num < A[i] && flag == -1)
        {
            if(A[i] % num == 0)
            {
                flag = 1;
            }
            num = num + 1;
        }

        if (flag == -1)
        {
            B[j] = A[i];
            j = j + 1;
        }

        num = 2;
        flag = -1;
    }

    while(band == 1)
    {
        band = -1;
        for(i = 0; i < j - 1; i = i + 1){
            if (B[i] > B[i+1])
            {
                aux = B[i];
                B[i] = B[i+1];
                B[i+1] = aux;
                band = 1;
            }
        }
    }
    
    printf("Ingrese un valor a buscar");
    scanf("%d", &valor);

    i = 0;
    while(B[i] <= valor)
    {
        pos = i;
        i = i + 1;
    }

    if(B[pos] == valor)
    {
        printf("El valor buscado se encuentra en la posicion %d", pos);
    }
    else
    {
        for(k = j; k > i; k = k - 1)
        {
            B[k] = B[k-1];
        }
        B[i] = valor;
    }

    return 0;
}