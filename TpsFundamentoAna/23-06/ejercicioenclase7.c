Completar un arreglo con los numeros primos entre 1 y 100 y mostrarlos por pantalla.
Utilizar una función para determinar si es primo.

int esprimo ()
{   
    int flag = 1;
    int i = 0;

    for (i = 2; i < x && flag == 1; i = i + 1)
    {
        if (x % i == 0)
        {
            flag = -1;
        }
    }

    return flag;
}

int main () 
{   
    int A[25];
    int valor = 0;
    int i = 2;
    int j = 0;

    while (i < 25)
    {
        printf("Ingrese un numero primo");
        scanf("%d", &valor);

        if ( valor > 1 && valor <= 100)
        {
            if (esprimo(valor) == 1)
            {
                A[i] = valor;
                i = i + 1;
                printf("%d\n", valor);
            }
        }
    }

    -- or --

    for (i = 2; i <= 100; i = i + 1)
    {
        if (esprimo(i) == 1)
        {
            A[j] = i;
            j = j + 1;
            printf("%d\n", &i);
        }
    }

    return 0;
}