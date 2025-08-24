#include <stdio.h>

int main()
{
    int horas, min, seg, tempo_total ;

    scanf("%i", &horas);
    scanf("%i", &min);
    scanf("%i", &seg);

    tempo_total = seg + (min * 60) + (horas * 3600);
    printf("O TEMPO EM SEGUNDOS E = %i\n", tempo_total);

    return 0;
}