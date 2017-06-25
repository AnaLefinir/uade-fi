Ingresar un numero y cargarlo en un vector de 100 posiciones. En la siguiente posición
siguiente cargar un 1 o un 0, dependiendo si el numero tiene raiz exacta (2) o no respectivamente.
Al final informar cuantos numeros no tienen raiz exacta.



int raizcuadrada (int x)
{
    int num = 1;
    int result = -1;

    while (x > 0)
    {
        x = x - num;
        num = num + 2;
    }

    if (x == 0)
    {   
        result = 1;
    }

    return result;
}

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