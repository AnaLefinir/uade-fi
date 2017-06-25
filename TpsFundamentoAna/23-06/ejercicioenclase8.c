Completar un vector con 50 terminos con valores pares. Ordenarlo
de forma ascendente. Ingresar un valor y ubicarlo por busqueda binaria.

int main () 
{   
    int A[100];
    int valor = -1;
    int count = 0;

    while (i<49) 
    {
        printf("Ingrese un num");
        scanf("%d", &valor);

        A[i] = valor;
        i = i + 1;
        
        if (raizcuadrada(valor) == 1)
        {
            A[i] = 1;
        }
        else
        {
            A[i] = 0;
        }

        i = i + 1;
        
    }

    return 0;
}