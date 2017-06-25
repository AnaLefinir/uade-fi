Dada la sucesión {4, 4, 8, 24, 96} completar hasta obtener un valor con raiz cuadrada exacta o 
se llegue al termino 50, lo primero que ocurra.

int raizexacta(int x)
{
    int result = -1;
    int j = 1;

    while(x > 0)
    {
        x = x - j;
        j = j + 2;
    }

    if(x == 0)
    {
        result = 1;
    }

    return result;
}

int factorial(int x)
{
    int result = 1;

    while(x > 1)
    {
        result = result * x;
        x = x - 1;
    }

    return result;
}

int main ()
{
    int A[50];
    int j = 5;
    A[0] = 4;
    A[1] = 4;
    A[2] = 8;
    A[3] = 24;
    A[4] = 96;

    while(raizexacta(A[j - 1]) == -1 && j<50)
    {
        A[j] = 4 * factorial(j);
        j = j + 1;
    }

    /*
    for(j = 5; raizexacta(A[i - 1]) == -1 && j<50; j = j + 1)
    {
        A[j] = 4 * factorial(j);
    }
    */

    return 0;
}