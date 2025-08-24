#include <stdio.h>
#include <math.h>

int main()
{
    double altura, aresta, volume, area_base ;

    scanf("%lf", &altura);
    scanf("%lf", &aresta);

    area_base = (3 * pow(aresta, 2) * sqrt(3)) / 2 ;
    volume = 1.0/3 * area_base * altura ;

    printf("O VOLUME DA PIRAMIDE E = %.2lf METROS CUBICOS\n", volume);

    return 0;
}