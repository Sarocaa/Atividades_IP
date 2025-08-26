#include <stdio.h>

int main()
    {
        int entrada, unidade, centena, dezena, nova_c, nova_d, num_final;

        scanf("%i", &entrada);

        centena = entrada / 100 ;
        dezena = (entrada - (centena * 100)) / 10 ;
        unidade = (entrada - (centena * 100) - (dezena * 10))/ 1 ;

        // printf("%i %i %i\n", centena, dezena, unidade);

        nova_c = unidade * 100;
        nova_d = dezena * 10;
        num_final = nova_c + nova_d + centena ;

        printf("%d\n", num_final);

        return 0;
    }