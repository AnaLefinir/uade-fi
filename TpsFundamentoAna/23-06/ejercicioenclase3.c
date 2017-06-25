Dada la sucesión {8, 9, 11, 14, 18} completar la sucesión
hasta la posición 20.

int main () 
{
    int A[20];
    A[0] = 8;
    int i = 0;

    for(i = 1; i < 20; i = i + 1)
    {
        A[i] = A[i-1] + i;
    }

    return 0;
}