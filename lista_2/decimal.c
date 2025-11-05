#include <stdio.h>

#define M 100000

int main()
{
    int final[M];
    int i=0, holder, resto, input, saida;

    while((scanf("%d", &input))!=EOF) // le as entradas ate EOF
    {
        if(input==0) printf("0\n");
        else 
        {
            for(i=0; ; i++)
            {
                resto = input%2; // calcula o resto

                if (resto==0) final[i] = 0;
                else if (resto==1) final[i] = 1;

                input = input/2; // divide por 2 e guarda
                holder++; // guarda o tamanho do num em binario
                if(input == 0) break;
            }
            for(i=holder-1; i>=0; i--)
            {
                printf("%d", final[i]);
                // printa ao contrario
            }
            printf("\n");
            holder = 0;
        }  
    }
    return 0;
}