#include <stdio.h>

int main () {
    
    float parcelaVencida, taxa, atraso, juros;

    printf ("Digite o valor da parcela em atraso: ");
    scanf ("%f", &parcelaVencida);
    printf ("Digite o valor da taxa periódico do juros: ");
    scanf ("%f", &taxa);
    printf ("Digite o período do atraso: ");
    scanf ("%f", &atraso);

    juros = parcelaVencida * taxa * atraso;

    printf ("O valor da parcela em atraso é: %.2f\nO tempo de atraso é: %.1f\n", parcelaVencida, atraso);
    printf ("O valor do juros é: %.2f\nE o valor da parcela com o juros incluso é: %.2f\n", juros, parcelaVencida + juros);

    return 0;

}