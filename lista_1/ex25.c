#include <stdio.h>
int main()
{
    int entrada, impar, i, j;
    scanf("%d", &entrada);
    impar=1;

        for(i=1; i<=entrada; i++)
        {
            printf("%d*%d*%d = ", i, i, i);
            for(j=0; j<i; j++)
            {
                printf("%d", impar);
                impar+=2;

                if(j<(i-1))
                {
                    printf("+");
                }
            }
            printf("\n");
        }
    return 0;
}