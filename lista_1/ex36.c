#include <stdio.h>
#include <math.h>

double Fat (double num)
{
    double fat=1;
    int i;
    for(i=1; i<=num; i++)
    {
        fat *= i;
    }
    if(num==0) fat=1;
    return fat;
}

double Exp (double num, int termos)
{
    double valor, soma=0;
    int i;
    for(i=0; i<=termos; i++)
    {
        soma=(pow(num, i)) / Fat(i);
        valor+=soma;
    }
    return valor;
}

int main ()
{
    double x, exp;
    int N, i;
    scanf("%lf%d", &x, &N);
    
    exp = Exp (x, N);
    
    printf("e^%.2lf = %lf\n", x, exp);
    return 0;
}