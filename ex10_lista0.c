#include <stdio.h>
#include <math.h>

int main()
{
    float L1, L2, L3, T, area;

    scanf("%f", &L1);
    scanf("%f", &L2);
    scanf("%f", &L3);

    T = (L1 + L2 +L3) / 2 ;
    area = sqrt (T *(T-L1)*(T-L2)*(T-L3));

    printf("A AREA DO TRIANGULO E = %.2f\n", area);

    return 0;
}