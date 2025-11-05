#include <stdio.h>
int main ()
{
    int entrada, i, soma;
    soma = 0;
    scanf("%d", &entrada);
    printf("%d = ", entrada);

    for(i=1; i<entrada; i++)
    {
        if(entrada%i==0)
        {
            soma = soma + i;
            if(i==1) printf("%d", i);
            else printf(" + %d", i);
        }
    }

    if(soma==entrada)
    {
        printf(" = %d (NUMERO PERFEITO)\n", soma);
    }
    else
    {
        printf(" = %d (NUMERO NAO E PERFEITO)\n", soma);
    }
    return 0;
}