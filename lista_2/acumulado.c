#include <stdio.h>
int main ()
{
    int N[10000], acum[10000], size, i, j, maior=0, comparador=0;
    // N[] é aonde está guardada a sequencia
    // acum[] é aonde ficam guardados a quantidade de num menores ou iguais
     
     while(1)
     {
        scanf("%d", &size);
        if(size==0) break;
 
        for(i=0; i<size; i++) scanf("%d", &N[i]);
 
        for(i=0; i<size; i++)
        {
            if(i==0 || N[i]>maior) maior=N[i]; 
            // guarda o maior num da seq
        }

        for(i=0; i<=maior; i++)
        {
            acum[i] = 0; 
            // zera todo vetor de comparacao
        }

        for(i=0; i<=maior; i++)
        {
            comparador = i; 
            for(j=0; j<size; j++)
            {
                if(comparador>=N[j]) acum[i]++;
                // adiciona os valores no vetor
            }
        }
        
        for(i=0; i<=maior; i++)
            {
                printf("(%d) %d\n", i, acum[i]);
                // printa [numero][quantidade]
            }
     }
    return 0;
}