#include <stdio.h>
int main()
{
    int entrada, c1, c2, hip;
    scanf("%i", &entrada);

    for(hip=1; hip<=entrada; hip++){
        for(c1=1; c1<hip; c1++){
            for(c2=1; c2<hip; c2++){
                if((hip*hip)==((c1*c1)+(c2*c2)) && c1<=c2){
                    printf("hipotenusa = %i, catetos %i e %i\n", hip, c1, c2);
                }
            }
        }
    }
    return 0;
}