#include <stdio.h>

int main ()
{
    int A, B;
    double M; //Média

    // printf("Digite um valor: ");
    scanf("%d", &A);

    //printf("Digite outro valor: ");
    scanf("%d", &B);

    M = (A + B) / 2.0;
    printf("%.3lf\n", M);

    return 0;
}