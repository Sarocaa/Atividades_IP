#include <stdio.h>
int main()
{
    int matricula;
    float MP, ML, NT, NF, presenca, p1, p2, p3, p4, p5, p6, p7, p8, l1, l2, l3, l4, l5;
    // MP= média 8 provas, ML= média 5 listas, NT= nota do trabalho, NF= nota final

    matricula = 0;
    while (matricula!=-1 && p1!=-1 && p2!=-1 && p3!=-1 && p4!=-1 && p5!=-1 && p6!=-1 && p7!=-1 && p8!=-1 && l1!=-1 && l2!=-1 && l3!=-1 && l4!=-1 && l5!=-1 && NT!=-1 && presenca!=-1){
        scanf("%i %f %f %f %f %f %f %f %f %f %f %f %f %f %f %f", &matricula, &p1, &p2, &p3, &p4, &p5, &p6, &p7, &p8, &l1, &l2, &l3, &l4, &l5, &NT, &presenca);
        MP = (p1+p2+p3+p4+p5+p6+p7+p8)/8;
        ML = (l1+l2+l3+l4+l5)/5;
        NF = (0.7*MP)+(0.15*ML)+(0.15*NT);
        if(NF>=6 && presenca>=108.8){
            printf("Matricula: %i, Nota Final: %.2f, Situacao Final: APROVADO\n", matricula, NF);
        }
        else if(NF>=6 && presenca<108.8){
            printf("Matricula: %i, Nota Final: %.2f, Situacao Final: REPROVADO POR FREQUENCIA\n", matricula, NF);
        }
        else if(NF<6 && presenca>=108.8){
            printf("Matricula: %i, Nota Final: %.2f, Situacao Final: REPROVADO POR NOTA\n", matricula, NF);
        }
        else{
            printf("Matricula: %i, Nota Final: %.2f, Situacao Final: REPROVADO POR NOTA E POR FREQUENCIA\n", matricula, NF);
        }
    }
    return 0;
}