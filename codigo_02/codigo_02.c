#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    char nome[41];
    float nota_lab, nota_sem, nota_exf, media;

    setlocale(LC_ALL,"Portuguese");
    printf("\t=====================================================\n");
    printf("\t |*** Digite o nome do aluno: ");
    fgets (nome,41,stdin);
    printf("\t----------------------------------------------------\n");
    printf("\t |*** Digite a nota do labortório: ");
    scanf("%f", &nota_lab);
    printf("\t----------------------------------------------------\n");
    printf("\t |*** Digite a nota da avaliação semestral: ");
    scanf("%f", &nota_sem);
    printf("\t----------------------------------------------------\n");
    printf("\t |*** Digite a nota do exame final: ");
    scanf("%f", &nota_exf);
    printf("\t----------------------------------------------------\n\n");
    media = ((2*nota_lab) + (3*nota_sem) + (5*nota_exf))/10;
    printf("\t  ***********************************************   \n");
       if(media >=8)
        printf("\t   O aluno(a): %s \t   Tem média %.2f e um conceito A\n", nome, media);
        else
         if(media<8 && media >=7)
          printf("\t   O aluno(a): %s \t   Tem média %.2f e um conceito B\n", nome, media);
          else
           if(media<7 && media>=6)
            printf("\t   O aluno(a): %s \t   Tem média %.2f e um conceito C\n", nome, media);
            else
             if(media<6 && media>=5)
              printf("\t   O aluno(a): %s \t   Tem média %.2f e um conceito d\n", nome, media);
              else
               ("\t   O aluno(a): %s \t   Tem média %.2f e um conceito d", nome, media);
               printf("\t  ***********************************************   \n\n\n");
    return 0;
}
