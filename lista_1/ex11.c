#include <stdio.h>
int main()
{
    int entrada;
    long int final, calculo;
    scanf("%i", &entrada);
    calculo = 1;

    while(entrada >=1){
        calculo = calculo * entrada;
        entrada--;
    }
    calculo = final;
    printf("%i! = %li\n", entrada, final);
    return 0;
}