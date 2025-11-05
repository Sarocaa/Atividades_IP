#include <stdio.h>
int main()
{
    int linhas, i;
    double temp_F, temp_C;
    scanf("%i", &linhas);

    for (i = 1; i <= linhas; i++){
        scanf("%lf", &temp_F);
        temp_C = 5*(temp_F-32)/9;
        printf("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n", temp_F, temp_C);
    }
    return 0;
}