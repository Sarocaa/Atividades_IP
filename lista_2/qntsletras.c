#include <stdio.h>
int main()
{
    int entrada, j=0, i;
    int letras, vogais, cons;
    int flag; //1=é letra, 0=nao é letra
    char frase[10000];

    scanf("%d", &entrada);

    while(1)
    {
        if(entrada==j) break;
        scanf("%[^\n]", frase);
        i=0;
        while(frase[i]!='\0')
        {
            if(frase[i]>='a' || frase[i]<='z'){
                letras++;
                flag=1;}
            else if(frase[i]>='A' || frase[i]<='Z'){
                letras++;
                flag=1;}
            else flag=0;

            if(flag==1)
            {
                if(frase[i]==65 || frase[i]==69 || frase[i]==73 || frase[i]==79 || frase[i]==85) vogais++;

                else if(frase[i]==97 || frase[i]==101 || frase[i]==105 || frase[i]==111 || frase[i]==117) vogais++;

                else cons++;
            }
            i++;
        }
        printf("Letras = %d\n", letras);
        printf("Vogais = %d\n", vogais);
        printf("Consoantes = %d\n", cons);
        j++;
    }
    return 0;
}