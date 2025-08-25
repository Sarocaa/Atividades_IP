#include <stdio.h>

int main()
{
    float preco_fabr, perc_distrib, perc_imposto, valor_final ;
    scanf("%f", &preco_fabr);
    scanf("%f", &perc_distrib);
    scanf("%f", &perc_imposto);

    valor_final = preco_fabr + (perc_distrib / 100 * preco_fabr) + (perc_imposto / 100 * preco_fabr);
    printf("O VALOR DO CARRO E = %.2f\n", valor_final);

    return 0;
}