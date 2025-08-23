#include <stdio.h>
int main ()
{
    float temp_F, chuva_pol, temp_C, chuva_mm ;

    scanf("%f", &temp_F);
    scanf("%f", &chuva_pol);

    temp_C = 5 * (temp_F - 32)/9 ;
    chuva_mm = chuva_pol * 25.4 ; 

    printf("O VALOR EM CELSIUS = %.2f\n", temp_C);
    printf("A QUANTIDADE DE CHUVA E = %.2f\n", chuva_mm);

    return 0;
}