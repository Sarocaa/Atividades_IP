#include <stdio.h>

int main()
{
    int tamA, tamB, i, j, flag=1, valido=1, prim=1;
    //1=print, 0=nao print
    int seqA[100], seqB[100];


    // tamanho dos conjuntos A e B
    while(1)
    {
        scanf("%d", &tamA);   
        if(tamA>0 && tamA<100) break;
    }
    while(1)
    {
        scanf("%d", &tamB);   
        if(tamB>0 && tamB<100) break;
    }
    
    // preencher conjuntos A e B eliminando repeticoes
    for(i=0; i<tamA; i++)
    {
        while(1)
        {
            scanf("%d", &seqA[i]);
            valido=1;
            for(j=0; j<i; j++)
            {
                if(seqA[i]==seqA[j])
                {
                    valido=0;
                    break;
                }
            }
            if(valido==1) break;
        }
    }

    for(i=0; i<tamB; i++)
    {
        while(1)
        {
            scanf("%d", &seqB[i]);
            valido=1;
            for(j=0; j<i; j++)
            {
                if(seqB[i]==seqB[j])
                {
                    valido=0;
                    break;
                }
            }
            if(valido==1) break;
        }
    }

    // printar A e B
    for(i=0; i<tamA; i++)
    {
        if(tamA==1) printf("(%d)\n", seqA[i]);
        else if(i==0) printf("(%d,", seqA[i]);
        else if(i==(tamA-1)) printf("%d)\n", seqA[i]);
        else printf("%d,", seqA[i]);
    }
    for(i=0; i<tamB; i++)
    {
        if(tamB==1) printf("(%d)\n", seqB[i]);
        else if(i==0) printf("(%d,", seqB[i]);
        else if(i==(tamB-1)) printf("%d)\n", seqB[i]);
        else printf("%d,", seqB[i]);
    }
    
    // printar A - B
    for(i=0; i<tamA; i++)
    {
        if(i==0) printf("(");
        for(j=0; j<tamB; j++)
        {
            if(seqB[j]==seqA[i]) flag=0;
        }
        if(flag==1)
        {
            if (prim==1) {
                printf("%d", seqA[i]);
                prim=0;
            }
            else if (prim==0) printf(",%d", seqA[i]);
        }
        if(i==(tamA-1)) printf(")\n");
        flag=1;
    }

    // printar A X B
    for(i=0; i<tamA; i++)
    {
        if(i==0) printf("(");
        for(j=0; j<tamB; j++)
        {
            if(i==(tamA-1) && j==(tamB-1)) printf("(%dx%d)", seqA[i], seqB[j]);
            else printf("(%dx%d),", seqA[i], seqB[j]);
        }
        if(i==(tamA-1)) printf(")\n");
    }
    return 0;
}