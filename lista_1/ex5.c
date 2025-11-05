#include <stdio.h> 
int main()
{
    int entrada, resto_3, resto_5;
    scanf("%i", &entrada);
    resto_3 = entrada%3;
    resto_5 = entrada%5;

    if(resto_3==0 && resto_5==0){
        printf("O NUMERO E DIVISIVEL\n");
    }
    else{
        printf("O NUMERO NAO E DIVISIVEL\n");
    }
    return 0;
}