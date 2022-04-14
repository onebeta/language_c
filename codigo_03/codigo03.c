#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Humberto Rodriguês dos Santos Júnior

/*Nome das variavéis
    hr_tr: quantidade de hora trabalhada.
    hr_ext: quantidade de hora extra.
    hr_falta: quantidade de horas faltadas
    val_hrtr: valor da hora trabalhada.
    val_hrext: valor da hora extra.
    val_hrfalta: valor da hora faltada.
    sal_br: salário bruto.
    sal_liq: salário líquido.
    cont_soc: valor da contribuição social.
    fisco_ir: valor do desconto do imposto de renda.
    totval_hrext: total em valores de horas extras.
    totval_hrfalta: total em valores de faltas.
    totval_hrtr: total em valores de horas trabalhadas.
    deducao: total em valores da devolução pela receita federal
    res_ope: somatório de salário líquido com devolução do imposto de renda.    
*/

int main()
{
    char nome_trab [61];
    int hr_tr, hr_ext, hr_falta;
    float val_hrtr, val_hrext, val_hrfalta,
          sal_br, sal_liq, cont_soc, fisco_ir,
          totval_hrext, totval_hrfalta,
          totval_hrtr, res_ope , deducao;

    setlocale(LC_ALL,"Portuguese");
    printf("\t==================================================================================\n");
    printf("\t||Digite o nome do trabalhador: ");
    fgets(nome_trab,61,stdin);
    printf("\t----------------------------------------------------------------------------------\n");
    printf("\t||Digite a quantidade de horas trabalhadas no mês: ");
    scanf("%i", &hr_tr);
    val_hrtr = 1212/6;
    val_hrext = val_hrtr*2;
    val_hrfalta = val_hrtr;
    printf("\t----------------------------------------------------------------------------------\n");
    printf("\t||Digite, se houver, a quantidade de horas extras trabalhadas: ");
    scanf("%i", &hr_ext);
    printf("\t----------------------------------------------------------------------------------\n");
    printf("\t||Digite, se houver, a quantidade de horas faltadas: ");
    scanf("%i", &hr_falta);
    printf("\t----------------------------------------------------------------------------------\n\n");
    sal_br = (hr_tr*val_hrtr) + (hr_ext*val_hrext) - (hr_falta*val_hrfalta);
    totval_hrext = hr_ext*val_hrext;
    totval_hrfalta = hr_falta*val_hrfalta;
    totval_hrtr = hr_tr*val_hrtr;
     if(sal_br <= 1045.00)
      cont_soc = (sal_br/100)*7.5;
      else
       if(sal_br>1045 && sal_br <=2089.60)
        cont_soc = (sal_br/100)*9;
        else
         if(sal_br > 2089.60 && sal_br <= 3134.40)
         cont_soc = (sal_br/100)*12;
         else
          if(sal_br > 3143.40)
          cont_soc = (sal_br/100)*14;
     if (sal_br <= 1903.98)
      fisco_ir = 0;
      else
       if(sal_br > 1903.98 && sal_br <= 2862.65)
        fisco_ir = (sal_br/100)*7.5;
        else
         if(sal_br>2862.65 && sal_br<=3751.05)
          fisco_ir = (sal_br/100)*15;
          else
           if (sal_br>3751.05 && sal_br<=4664.68)
            fisco_ir = (sal_br/100)*22.5;
            else
             fisco_ir = (sal_br/100)*27.5;
     if (sal_br <= 1903.98)
      deducao = 0;
      else
       if(sal_br > 1903.98 && sal_br <= 2862.65)
        deducao = 142.80;
        else
         if(sal_br>2862.65 && sal_br<=3751.05)
          deducao = 345.80;
          else
           if (sal_br>3751.05 && sal_br<=4664.68)
            deducao = 636.13;
            else
             deducao = 869.36;
     sal_liq = sal_br - (cont_soc + fisco_ir);
     res_ope = sal_liq + deducao;
     printf("\t**********************************************\n");
     printf("\t*** Tabela de valores trabalhadas por hora ***\n");
     printf("\t**********************************************\n");
     printf("\t*** Valor hora:           \tR$%.2f\n", val_hrtr);
     printf("\t*** Valor da hora extra:  \tR$%.2f\n", val_hrext);
     printf("\t*** Valor da hora faltada:\tR$%.2f\n", val_hrfalta);
     printf("\t**********************************************\n\n");
     printf("\t----------------------------------------------------------------------------------\n");
     printf("\tHoras extras: %i horas      \t||    Valor das horas extas:      R$%.2f\n", hr_ext, totval_hrext);
     printf("\tHoras faltas: %i horas      \t||    Valor por falta por hora:   R$%.2f\n", hr_falta, totval_hrfalta);
     printf("\tHoras trabalhadas: %i horas \t||    Valor de horas trabalhadas: R%.2f\n", hr_tr, totval_hrtr);
     printf("\t----------------------------------------------------------------------------------\n\n");
     printf("\t==================================================================================\n");
     printf("\tnome: %s", nome_trab);
     printf("\tSalário bruto:                         \tR$%.2f\n", sal_br);
     printf("\tContibuição social do INSS:            \tR$%.2f(-)\n", cont_soc);
     printf("\tDesconto fiscal do IR:                 \tR$%.2f(-)\n", fisco_ir);
     printf("\tSalário líquido:                       \tR$%.2f\n", sal_liq);
     printf("\tValor da dedução:                      \tR$%.2f(+)\n", deducao);
     printf("\t==================================================================================\n\n");
     printf("\tResultado operacional (salário líquido + deduções)\n");
     printf("\tTotal: R$%.2f\n\n\n", res_ope);

    return 0;
}
