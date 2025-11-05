#include <stdio.h>
int main()
{
    int n1, n2, n3, A, B, C;
    char letra1, letra2, letra3;

    scanf("%d%d%d\n", &n1, &n2, &n3);
    A = n1;
    if (n2 > n1) B = n2;
    else {
        B = n1;
        A = n2;
    }
    if (n3 > n2) C = n3;
    else if (n3 > A && n3 < B){
        C = B;
        B = n3;
    }
    else{
        C = n1;
        B = n2;
        A = n3;
    }

    scanf("%c%c%c", &letra1, &letra2, &letra3);
    // A menor, B meio, C maior

    if (letra1=='A')
    {
        printf("%d ", A);
        if (letra2=='B') printf("%d %d\n", B, C);
        else printf("%d %d\n", C, B);
    }
    else if (letra1=='B')
    {
        printf("%d ", B);
        if (letra2=='A') printf("%d %d\n", A, C);
        else printf("%d %d\n", C, A);
    }
    else
    {
        printf("%d ", C);
        if (letra2=='A') printf("%d %d\n", A, B);
        else printf("%d %d\n", B, A);
    }
    return 0;
}