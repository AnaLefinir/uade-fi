Ingresar dos valores de dos dígitos cada uno. Controlar que sea así y además contraolar
que ninguno de ellos termine en cero.
Verificar si el producto de ellos genera un número vampiro de 4 dígitos.
Un número vampiro tiene un numero par de dígitos, se obtiene al multiplicar dos numeros llamados
colmillos que tiene la mitad de dígitos que el original.
Tiene los mismos dígitos que los colmillos y en la misma cantidad aunque en cualquier orden. Los colmillos
no acaban en cero.

int evaluarnum (int x, int dig)
{
    int cant = 0;
    int result = -1;
    
    if(x % 10 != 0)
    {
        while(x > 0)
        {
            x = x / 10;
            cant = cant + 1;
        }

        if(cant == dig)
        {
            result = 1;
        }
    }

    return result;
}

int main ()
{
    int num1 = 0;
    int num2 = 0;
    int prod = 0;
    int P[4];
    int N[4];
    int i = 0;
    int j = 0;
    int count = 0;

    printf("Ingrese el 1° num de dos dígitos");
    scanf("%d", &num1);
    while(evaluarnum(num1, 2) == -1)
    {
        printf("Ingrese otro num de dos dígitos");
        scanf("%d", &num1);
    }

    printf("Ingrese el 2° num de dos dígitos");
    scanf("%d", &num2);
    while(evaluarnum(num2, 2) == -1)
    {
        printf("Ingrese otro num de dos dígitos");
        scanf("%d", &num2);
    }

    prod = num1 * num2;

    if(evaluarnum(prod, 4) == 1)
    {
        while(prod > 0)
        {
            P[i] = prod % 10;
            prod = prod / 10;
            i = i + 1;
        }

        while(j < 4)
        {
            if(num1 > 0)
            {
                N[j] = num1 % 10;
                num1 = num1 / 10;
                j = j + 1;
            }
            else
            {
                if(num2 > 0)
                {
                    N[j] = num2 % 10;
                    num2 = num2 / 10;
                    j = j + 1;
                }
            }
        }

        for( i = 0; i < 4; i = i +1)
        {
            for(j = 0; j < 4; j = j + 1)
            {
                if(P[i] == N[j])
                {
                    count = count + 1;
                }
            }
        }


    }

    if(count == 4)
    {
        printf("Es vampiroooo! v**v");
    }
    else
    {
        printf("No es vampiro :(");
    }


    return 0;
}