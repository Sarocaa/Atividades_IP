#include <stdio.h>

int main()
{
    int entrada;
    int divisao, resto1, resto2, resto3, resto4, resto5, resto6, resto7, resto8;
    scanf("%i", &entrada);
    if (0 <= entrada && entrada <= 255) {

        resto1 = entrada % 2;
        divisao = entrada / 2; 

        resto2 = divisao % 2;
        divisao = divisao / 2;

        resto3 = divisao % 2;
        divisao = divisao / 2; 

        resto4 = divisao % 2;
        divisao = divisao / 2; 

        resto5 = divisao % 2;
        divisao = divisao / 2;

        resto6 = divisao % 2;
        divisao = divisao / 2;

        resto7 = divisao % 2;
        divisao = divisao / 2;

        resto8 = divisao % 2;
        divisao = divisao / 2;

        printf("%d%d%d%d%d%d%d%d\n", resto8, resto7, resto6, resto5, resto4, resto3, resto2, resto1);
    }
    else {
     printf("Numero invalido!\n");   
    }
    
    return 0; 
}