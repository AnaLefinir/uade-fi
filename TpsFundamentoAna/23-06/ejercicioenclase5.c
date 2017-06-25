Dada la sucesión {7, 14, 16, 32, 34, 68} informar que valor se obtiene en el termino 30.__d_

int main () 
{
    int count = 1;
    int term = 7;
    int i = 1;

    while (count < 30)
    {
        if(i % 2 == 0)
        {
            term = term + 2;
        }
        else
        {
            term = term * 2;
        }

        i = i + 1;
    }

    printf("El valor del termino 30 es %d", term);

    return 0;
}