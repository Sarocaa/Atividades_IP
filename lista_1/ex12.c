#include <stdio.h>
int main()
{
    int tamanho_seq, i, num, seq_atual, seq_maior, anterior;
    scanf("%i", &tamanho_seq);
    seq_atual=0;
    anterior=0;
    seq_maior=0;

    for(i=0; i<tamanho_seq; i++){
        scanf("%i", &num);

        if(num>anterior || i==0){
            seq_atual++;
            anterior=num;
            if (seq_atual>seq_maior){
                seq_maior=seq_atual;
            }
        }
        else{
            if (seq_atual>seq_maior){
                seq_maior=seq_atual;
            }
            anterior=num;
            seq_atual=1;
        }
    }
    printf("O comprimento do segmento crescente maximo e: %i\n", seq_maior);
    return 0;
}