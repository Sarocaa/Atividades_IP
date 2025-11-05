#include <stdio.h>
int fat (int num)
{
    int i, fat=1;
    for(i=1; i<=num; i++)
    {
        fat *= i;
    }
    return fat;
}
int main ()
{
    int linha_inicial, linha_final, i, j, pascal;
    scanf("%d%d", &linha_inicial, &linha_final);
    
    for (i=linha_inicial; i<=linha_final; i++)
    {
        for(j=0; j<=i; j++)
        {
            pascal = (fat(i))/((fat(j)) * ((fat(i-j))));
            printf("%d", pascal);
            if(j<(i)){
                printf(",");
            }
        }
        printf("\n");
    }
    return 0;
}