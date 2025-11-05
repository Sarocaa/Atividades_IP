#include <stdio.h>
int main()
{
    int num_vendas, vendas_ant=0, i=0;
    int lucro_menos10=0, lucro_mais10=0, lucro_mais20=0;
    unsigned long int codigo, cod_lucro, cod_venda;
    float preco_compra, preco_venda, valor_totalC=0, valor_totalV=0, percentual;
    float lucro_perc=0, lucro=0, lucro_ant=0;
 
    while((scanf("%lu %f %f %d", &codigo, &preco_compra, &preco_venda, &num_vendas))!=EOF)
    {
        lucro = preco_venda-preco_compra;
        lucro_perc = lucro/preco_compra;
        
        if (lucro_perc < 0.1) lucro_menos10++;
        else if (lucro_perc <= 0.2) lucro_mais10++;
        else if (lucro_perc > 0.2) lucro_mais20++;
        
        if (lucro > lucro_ant|| i==0)
        {
            cod_lucro = codigo;
            lucro_ant = lucro;
        } 
        
        if (num_vendas > vendas_ant || i==0)
        {
            cod_venda = codigo;
            vendas_ant = num_vendas;
        }
 
        valor_totalC = valor_totalC + (preco_compra*num_vendas);
        valor_totalV = valor_totalV + (preco_venda*num_vendas);
        
        
        lucro_perc = 0;
        lucro=0;
        i++;
    }
    percentual = ((valor_totalV - valor_totalC)/valor_totalC)*100;
    
    printf("Quantidade de mercadorias que geraram lucro menor que 10%%: %d\n", lucro_menos10);
    printf("Quantidade de mercadorias que geraram lucro maior ou igual a 10%% e menor ou igual a 20%%: %d\n", lucro_mais10);
    printf("Quantidade de mercadorias que geraram lucro maior do que 20%%: %d\n", lucro_mais20);
    printf("Codigo da mercadoria que gerou maior lucro: %lu\n", cod_lucro);
    printf("Codigo da mercadoria mais vendida: %lu\n", cod_venda);
    printf("Valor total de compras: %.2f, valor total de vendas: %.2f e percentual de lucro total: %.2f%%\n", valor_totalC, valor_totalV, percentual);
 
    return 0;
}