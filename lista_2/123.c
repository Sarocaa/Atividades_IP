#include <stdio.h>
#include <string.h>

int main()
{
    int entrada, i, j, count1, count2;
    char word[100000];
    char w_two[4]={'t', 'w', 'o'}; 
    char w_one[4]={'o', 'n', 'e'};

    scanf("%d", &entrada);
    getchar();

    for(i=0; i<entrada; i++)
    {
        count1 = 0;
        count2 = 0;
        scanf("%s", word);
        getchar();
    
        if(strlen(word)==5) printf("3\n");
        else 
        {
            for(j=0; j<4; j++)
            {
                if (word[j] == w_one[j]) count1++;
                if (word[j] == w_two[j]) count2++;
            }
            if (count1>count2) printf("1\n");
            else printf("2\n");
        }
    }
    return 0;
}