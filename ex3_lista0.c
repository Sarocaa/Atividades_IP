#include <stdio.h>
int main ()
{
    const float PI = 3.14159 ;
    float raio, altura, valor, area_total;

    scanf("%f", &raio);
    scanf("%f", &altura);

    area_total = 2*(PI * raio * raio) + (2 * PI * raio * altura);
    valor = area_total * 100 ;

    printf("O VALOR DO CUSTO E = %.2f\n", valor);

    return 0;
}