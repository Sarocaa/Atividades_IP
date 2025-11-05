#include <stdio.h> 
int main()
{
    int conta;
    float consumo, valor_excedente;
    double valor_final;
    char tipo_consumidor;
    scanf("%i %f %c", &conta, &consumo, &tipo_consumidor);

    if (tipo_consumidor == 'R'){
        valor_final = 5 + (consumo * 0.05);
        printf("CONTA = %i\n", conta);
        printf("VALOR DA CONTA = %.2lf\n", valor_final);
    }
    else if(tipo_consumidor == 'C'){
        if (consumo >= 80){
            valor_excedente = consumo - 80;
            valor_final = 500 + (0.25 * valor_excedente);
            printf("CONTA = %i\n", conta);
            printf("VALOR DA CONTA = %.2lf\n", valor_final);
        }
        else{
            valor_final = 500;
            printf("CONTA = %i\n", conta);
            printf("VALOR DA CONTA = %.2lf\n", valor_final);
        }
    }
    else if(tipo_consumidor == 'I'){
        if (consumo >= 100){
            valor_excedente = consumo - 100;
            valor_final = 800 + (0.04 * valor_excedente);
            printf("CONTA = %i\n", conta);
            printf("VALOR DA CONTA = %.2lf\n", valor_final);
        }
        else{
            valor_final = 800;
            printf("CONTA = %i\n", conta);
            printf("VALOR DA CONTA = %.2lf\n", valor_final);
        }
    }
    return 0;
}