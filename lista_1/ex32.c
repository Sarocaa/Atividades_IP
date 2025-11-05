#include <stdio.h>
int main()
{
    int seq, num_inicial, num_entrada, num_3;
    int flag=0, intercalada=1, i; // 1=crescente, 0=decresente // 1=intercalada, 0=nao intercalada

    scanf("%d", &seq);
    while(seq!=0)
    {
        intercalada = 1;
        scanf("%d%d", &num_inicial, &num_entrada);
        if(num_inicial>num_entrada)
        {
            flag=0;
        }
        else if(num_inicial<num_entrada)
        {
            flag=1;
        }
        else
        {
            intercalada=0;
        }

        for(i=2; i<seq; i++)
        {
            scanf("%d", &num_3);
            if(num_3>num_entrada && flag==1)
            {
                intercalada=0;
            }
            else if(num_3<num_entrada && flag==0)
            {
                intercalada=0;
            }
            else if(num_3==num_entrada)
            {
                intercalada=0;
            }

            if(flag==0)
            {
                flag=1;
            }
            else
            {
                flag=0;
            }

            num_entrada=num_3;
        }
        if(intercalada==1)
        {
            printf("Intercalada\n");
        }
        else
        {
            printf("Nao intercalada\n");
        }
        scanf("%d", &seq);
    }
    return 0;
}