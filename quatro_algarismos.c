#include <stdio.h>

int main()
    {
        int entrada, unidade, centena, dezena, quarto_dig, num_final, soma_3;

        scanf("%i", &entrada);

        centena = entrada / 100 ;
        dezena = (entrada - (centena * 100)) / 10 ;
        unidade = (entrada - (centena * 100) - (dezena * 10))/ 1 ;

        soma_3 = centena + (dezena * 3) + (unidade * 5);
        quarto_dig = soma_3 % 7 ;
        num_final = (entrada * 10) + quarto_dig;

        printf("O NOVO NUMERO E = %i\n", num_final);

        return 0;
    }