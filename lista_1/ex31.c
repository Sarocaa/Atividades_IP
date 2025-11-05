#include <stdio.h>

int main ()
{
    int n, F1, F2, seq_atual, i, proximo;
    int flag=1; // 1 = fibonacci, 0 = nao é
    scanf("%d %d %d", &n, &F1, &F2);

    for(i=0; i<n; i++)
    {
        scanf("%d", &seq_atual);
        if(seq_atual==F1) printf("OK\n");
        else 
        {
            printf("Nao e Fibonacci\n");
            flag=0;
            break;
        }
        proximo = F1 + F2;
        F1 = F2;
        F2 = proximo;
    }
    if (flag==1) printf("A serie informada e de Fibonacci\n");

    return 0;
}