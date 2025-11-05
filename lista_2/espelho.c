#include <stdio.h>
#include <string.h>

int main()
{
    int testes, i, j, count, inicio, fim, tam;
    int x, num, div;
    int seq[10000];
    scanf("%d", &testes);
 
    for(i=0; i<testes; i++)
    {
        inicio=0; fim=0; count=0; j=0;
        scanf("%d%d", &inicio, &fim);
        tam=(fim-inicio+1)*2;

        for(j=0; j<tam; j++) seq[j]=0;
 
        for(j=inicio; j<=fim; j++)
        {
            seq[count]=j;
            count++;
        }
        for(j=tam/2; j<tam; j++)
        {
            seq[count]=fim;
            fim--;
            count++;
        }
        for(j=0; j<tam; j++)
        {
            if(j<tam/2) printf("%d", seq[j]);
            else
            {
                num=seq[j];
                div=10;
                while(1)
                {
                    x=num%div;
                    printf("%d", x);
                    num=num/div;
                    if(num==0) break;
                }
            }
        }
        printf("\n");
    }
    return 0;
}