#include <stdio.h>

int main ()
{
    int seq[10000], input, maior=0, atual=0, freq_atual=0, freq_maior=0, j, i;
    scanf("%d", &input); // le o tamanho da sequencia

    for(i=0; i<input; i++)
    {
        // le todos itens da sequencia
        scanf("%d", &seq[i]);
    }

    maior=seq[0]; freq_maior=0; //inicializa as variaveis
    for(i=0; i<input; i++)
    {
        // compara todos itens j com item i
        for(j=0; j<input; j++)
        {
            if(seq[j]==seq[i]) // se é igual !!!
            {
                atual = seq[j]; // atual = é o num de maior freq no momento
                freq_atual++;
            }
        }

        if(freq_atual>=freq_maior) // se for maior ou igual a maior seq
        {
            if(freq_atual==freq_maior)
            { // se for igual, guardar o menor numero
                if(atual<maior)
                { // so muda se o atual for menor que o guardado
                    maior = atual;
                    freq_maior = freq_atual;
                }
            }
            else
            { // altera os valores de maior freq e o num que possui maior freq
                maior = atual;
                freq_maior = freq_atual;
            }
        }
        atual=0;
        freq_atual=0;
    }

    printf("%d\n%d\n", maior, freq_maior);
    return 0;
}