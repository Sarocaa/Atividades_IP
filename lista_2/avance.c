#include <stdio.h>
#include <string.h>
 
int main()
{
    char A[10000], B[10000];
    int testes, counter=0, k, j, i;
    scanf("%d", &testes);
 
    for(i=0; i<testes; i++)
    {
        scanf("%s", A);
        scanf("%s", B);
        counter=0;
 
        for(k=0; k<strlen(A); k++)
        {
            if(A[k]==B[k]) ;
            else if(A[k]!=B[k])
            {
                while(1)
                {
                    A[k]+=1;
                    if(A[k]>'z') A[k]='a';
                    counter++;
                    if(A[k]==B[k]) break;
                }
            }
        }
        printf("%d\n", counter);
    }
    return 0;
}