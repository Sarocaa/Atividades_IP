#include <stdio.h>
int main()
{
    int testes, i, x=0, y=0, x_un=0, y_un=0, x_dez=0, y_dez=0, x_cen=0, y_cen=0, x_contr=0, y_contr=0 ;
    scanf("%i", &testes);
 
    for (i=0; i<testes; i++){
        scanf("%i %i", &x, &y);
        x_cen = x/100;
        x_dez = (x - (x_cen * 100))/ 10;
        x_un = x - (x_cen * 100) - (x_dez * 10);
        y_cen = y/100;
        y_dez = (y - (y_cen * 100))/ 10;
        y_un = y - (y_cen * 100) - (y_dez * 10);
        x_contr = (x_un * 100) + (x_dez * 10) + x_cen;
        y_contr = (y_un * 100) + (y_dez * 10) + y_cen;
 
        if (x_contr > y_contr){
            printf("%i%i%i\n", x_un, x_dez, x_cen);
        }
        else {
            printf("%i%i%i\n", y_un, y_dez, y_cen);
        }
    }
 
    return 0;
}