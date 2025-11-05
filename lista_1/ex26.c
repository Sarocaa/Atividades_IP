#include <stdio.h>
int main()
{
    int entrada, entr_un, entr_dez, entr_cen, entr_unm, entr_dezm;
    scanf("%d", &entrada);
    if(entrada>10000 && entrada<99999)
    {
        entr_un = entrada/10000;
        entr_dez = (entrada-(entr_un*10000))/1000;
        entr_cen = (entrada-(entr_un*10000)-(entr_dez*1000))/100;
        entr_unm = (entrada-(entr_un*10000)-(entr_dez*1000)-(entr_cen*100))/10;
        entr_dezm = (entrada-(entr_un*10000)-(entr_dez*1000)-(entr_cen*100))-(entr_unm*10);
        if(entr_dezm==entr_un && entr_dez==entr_unm)
        {
            printf("PALINDROMO\n");
        }
        else
        {
            printf("NAO PALINDROMO\n");
        }
    }
    else if(entrada>100 && entrada<999)
    {
        entr_un = entrada/100;
        entr_dez = (entrada-(entr_un*100))/10;
        entr_cen = (entrada-(entr_un*100)-(entr_dez*10));
        if(entr_cen==entr_un)
        {
            printf("PALINDROMO\n");
        }
        else
        {
            printf("NAO PALINDROMO\n");
        }
    }
    else if(entrada>10 && entrada<99)
    {
        printf("NUMERO INVALIDO\n");
    }
    else if(entrada>1000 && entrada<9999)
    {
        entr_un = entrada/1000;
        entr_dez = (entrada-(entr_un*1000))/100;
        entr_cen = (entrada-(entr_un*1000)-(entr_dez*100))/10;
        entr_unm = (entrada-(entr_un*1000)-(entr_dez*100)-(entr_cen*10));
        if(entr_un==entr_unm)
        {
            printf("PALINDROMO\n");
        }
        else
        {
            printf("NAO PALINDROMO\n");
        }
    }
    else
    {
        printf("NUMERO INVALIDO\n");
    }
    return 0;
}