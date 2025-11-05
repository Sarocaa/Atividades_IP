#include <stdio.h>
int main()
{
    float n1, n2, n3, entrada, anterior, maior=0, medio1=0, medio2=0, menor=0;
    int i;

    for(i=0; i<4; i++)
    {
        scanf("%f", &entrada);
        if (entrada>=anterior || i==0)
        {
            maior=entrada;
        }
        anterior=entrada;
    }
    
    printf("%.2f, %.2f, %.2f, %.2f\n", menor, medio1, medio2, maior);
    
    return 0;
}