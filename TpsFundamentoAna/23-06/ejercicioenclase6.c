Dada la sucesión {7, 14, 21} completarla hasta el termino 343000 e informar cuantos valores son cubos perfectos.

int cuboexacto ()
{
    int flag = -1;
    int i = 0;

    for (i = 2; (i < x) && (flag == -1); i = i + 1)
    {
        if(x == i * i * i)
        {
            flag = 1;
        }
    }

    return flag;
}


int main () 
{
    int A[343000];
    int cant = 0;
    int i = 0;

    for (i = 0; i < 343000; i = i + 1)
    {
        A[i] = 7 * (i + 1);

        if (cuboexacto(A[i]) == 1)
        {
            cant = cant + 1;
        }
    }

    -- or --

    int valor = 0;
    int cant = 0;

    for (i = 0; i < 343000; i = i + 1)
    {
        valor = 7 * (i + 1);
        if (cuboexacto(valor) == 1)
        {
            cant = cant + 1;
        }
    }

    return 0;
}