#include <stdio.h>

int main()
{
    int entrada ;
    int nota_100 = 0, nota_50 = 0, nota_10 = 0, moeda_1 = 0 ;
    scanf("%i", &entrada); 

    while (entrada >= 100)
    entrada -= 100, nota_100 += 1;

    while (entrada >= 50)
    entrada -= 50 , nota_50 += 1;

    while (entrada >= 10) 
    entrada -= 10 , nota_10 += 1;

    while (entrada >= 1) 
    entrada -= 1, moeda_1 += 1;

    printf("NOTAS DE 100 = %i\n", nota_100);
    printf("NOTAS DE 50 = %i\n", nota_50);
    printf("NOTAS DE 10 = %i\n", nota_10);
    printf("MOEDAS DE 1 = %i\n", moeda_1);
    
    return 0;
}