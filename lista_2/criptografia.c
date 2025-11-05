#include <stdio.h>
#include <string.h>

int main()
{
    int testes=0, tamanho=0, ultima=0, metade=0, r=0, j=0, i=0, k=0;
    char senha[10000], holder;
    scanf("%d", &testes);
    getchar();

    for(r=0; r<testes; r++)
    {
        scanf("%[^\n]", senha);
        getchar();
        tamanho = strlen(senha);
 
        for(j=0; j<tamanho; j++)
        {
            // PRIMEIRA MODIFICACAO NA SENHA!
            if(senha[j]>=65 && senha[j]<=90)
            {
                senha[j] += 3;
            }
            else if(senha[j]>=97 && senha[j]<=122)
            {
                senha[j] += 3;
            }
            else;
        }

        ultima=tamanho-1;
        k=0;
        while(1){
            // SEGUNDA MODIFICACAO NA SENHA!
            holder=senha[ultima];
            senha[ultima] = senha[k];
            senha[k] = holder;
            k++;
            ultima--;
            if(k>=ultima) break;
            // else if(ultima==k) break;
        }

        metade=tamanho/2;
        for(j=(tamanho-1); j>=metade; j--)
        {
            // TERCEIRA MODIFICACAO NA SENHA!
            senha[j] -= 1;
        }
         
        for(i=0; i<tamanho; i++) printf("%c", senha[i]);
        printf("\n");

        tamanho=0, ultima=0, metade=0, j=0, i=0, k=0;
    }
    return 0;
}