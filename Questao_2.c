#include <stdio.h>
#include <math.h>

double fatorial(int x)
{
    double resultado = 1;
    if (x == 0)
        return 1;

    for (int i = x; i > 1; i--)
    {
        resultado = resultado * i;
    }
    return resultado;
}

void main()
{
    double x;
    int n;

    printf("Digite o X depois o N: \n");
    scanf("%lf%d", &x, &n);
    double soma = 0;
    for (int i = 0; i < n; i++)
    {
        double potencia =pow(x, i);
        soma += (potencia/ fatorial(i));
        printf("%lf\n",soma );
    }
    
}