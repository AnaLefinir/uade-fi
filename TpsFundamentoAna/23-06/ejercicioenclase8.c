Completar un vector con 50 terminos con valores pares. Ordenarlo
de forma ascendente. Ingresar un valor y ubicarlo por busqueda binaria.

int main () 
{   
    int A[50];    
    int valor = -1;
    int i = 0;
    int buscar = -1;
    int flag = 1;
    int aux = -1;
    int izq = 0;
    int der = 49;
    int med = -1;
    int pos = -1;

    while (i < 50)
    {
        printf("Ingrese un numero par");
        scanf("%d", &valor);

        if (valor % 2 == 0)
        {
            A[i] = valor;
            i = i + 1;
        }
    }

    while (flag == 1)
    {
        flag = -1;

        for (i = 0; i < 49; i = i + 1) 
        {
            if (A[i] > A[i + 1])
            {
                aux = A[i];
                A[i] = A[i + 1];
                A[i + 1] = aux;
                flag = 1;
            }
        }
    }

    printf("Ingrese un valor a buscar");
    scanf("%d", &buscar);

    while (izq <= der && pos == -1)
    {
        med = (izq + der) / 2;

        if (A[med] == buscar)
        {
            pos = med;
        }
        else
        {
            if (A[med] > buscar)
            {
                der = med - 1;
            }
            else 
            {
                izq = med + 1;
            }
        }
    }

    return 0;
}