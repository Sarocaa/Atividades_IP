#include <stdio.h>
#include <string.h>
 
int main()
{
    int input, i, k, num;
    char frase[500];
 
    scanf("%d", &input);
 
    if(input>20) return 0;
 
    for(i=0; i<input; i++)
    {
        scanf("%d", &num);
        getchar();
        scanf("%[^\n]", frase);
        for(k=0; k<num; k++)
        {
            printf("%c", frase[k]);
        }
        printf("\n");
    }
 
    return 0;
}