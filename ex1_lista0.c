#include <stdio.h>

int main ()
{
    double salario, kw_gasto, valor_kw, valor_desconto, valor_consumo;

     // printf("Digite o salário: ");
    scanf("%lf", &salario);
    //printf("Digite os kW gastos: ");
    scanf("%lf", &kw_gasto);
    
    valor_kw = (0.7 * salario) / 100 ;
    valor_consumo = valor_kw * kw_gasto ;
    valor_desconto = valor_consumo * 0.9 ;

    printf("Custo por kW: R$ %.2lf\n", valor_kw);
    printf("Custo do consumo: R$ %.2lf\n", valor_consumo);
    printf("Custo com desconto: R$ %.2lf\n", valor_desconto);

    return 0;
}