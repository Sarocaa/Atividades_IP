#include <stdio.h>
 
#define M 999999
#define N 999999
 
int main()
{
    int num1, num2, soma;
    int i=0, j=0, k=0;
    char num[M], vsoma[M];
 
    while(1)
    {
        scanf("%d", &num1);
        scanf("%d", &num2);
 
        if(num1==0 && num2==0) break;
 
        soma = num1+num2;
        sprintf(vsoma, "%d", soma);
        
        i=0;
        while(vsoma[i]!='\0'){
            if(vsoma[i]!='0'){
                printf("%c", vsoma[i]);
                
            }
            
            i++;
        }
        printf("\n");
        // for(i=0; i<=j; i++) printf("%s", num);
        
        j=0;
    }
    return 0;
}