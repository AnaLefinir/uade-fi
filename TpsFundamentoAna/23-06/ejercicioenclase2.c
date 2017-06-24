Ingresar un número de 3 dígitos (abc) informar si es un número bueno.
El número bueno cumple que a^2 = b*c.

int evaluarnum (int x, int dig)
{
    int cant = 0;
    int result = -1;
    
    
     while(x > 0)
    {
        x = x / 10;
        cant = cant + 1;
    }
    
    if(cant == dig)
    {
        result = 1;
    }
    

    return result;
}

int main () 
{
    int num = 0;
    int A[3];
    int i = 0;

    printf("Ingresar un num de 3 cifras");
    scanf("%d", &num);

    while(evaluarnum(num, 3) == -1)
    {
        printf("Ingreso otro numero de 3 cifras");
        scanf("%d", &num);
    }

    while(num > 0)
    {
        A[i] = num % 10;
        num = num / 10;
        i = i + 1;
    }

    if(A[0] * A [1] == A[2] * A[2])
    {
        printf("El número es bueno :)");
    }
    else
    {
        printf("El numero no es bueno :(");
    }

    return 0;
}