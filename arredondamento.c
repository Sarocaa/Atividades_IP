#include <stdio.h>

int main()
{
    float entrada ; 

    scanf("%f", &entrada);
    printf("%.1f00000\n", entrada);
    printf("%.2f0000\n", entrada);
    printf("%.3f000\n", entrada);
    return 0;
}