#include <stdio.h>
int main()
{
    long int entrada, dia, mes, ano;
    scanf("%ld", &entrada);
    dia = entrada/1000000;
    mes = (entrada - dia*1000000) / 10000;
    ano = (entrada - (dia*1000000) - mes*10000);

    switch (mes){
        case 1:
            if(dia<=31) printf("%ld de janeiro de %ld\n", dia, ano);
            else printf("Data invalida!\n");
            break;
        case 2:
            if(dia<=28) printf("%ld de fevereiro de %ld\n", dia, ano);
            else printf("Data invalida!\n");
            break;
        case 3:
            if(dia<=31) printf("%ld de marco de %ld\n", dia, ano);
            else printf("Data invalida!\n");
            break;
        case 4:
            if(dia<=30) printf("%ld de abril de %ld\n", dia, ano);
            else printf("Data invalida!\n");
            break;    
        case 5:
            if(dia<=31) printf("%ld de maio de %ld\n", dia, ano);
            else printf("Data invalida!\n");
            break;
        case 6:
            if(dia<=30) printf("%ld de junho de %ld\n", dia, ano);
            else printf("Data invalida!\n");
            break;
        case 7:
            if(dia<=31) printf("%ld de julho de %ld\n", dia, ano);
            else printf("Data invalida!\n");
            break;
        case 8:
            if(dia<=31) printf("%ld de agosto de %ld\n", dia, ano);
            else printf("Data invalida!\n");
            break;
        case 9:
            if(dia<=30) printf("%ld de setembro de %ld\n", dia, ano);
            else printf("Data invalida!\n");
            break;
        case 10:
            if(dia<=31) printf("%ld de outubro de %ld\n", dia, ano);
            else printf("Data invalida!\n");
            break;
        case 11:
            if(dia<=30) printf("%ld de novembro de %ld\n", dia, ano);
            else printf("Data invalida!\n");
            break;
        case 12:
            if(dia<=31) printf("%ld de dezembro de %ld\n", dia, ano);
            else printf("Data invalida!\n");
            break;
        default:
            printf("Data invalida!\n");
            break;
    }
    return 0;
}