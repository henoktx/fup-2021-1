#include <stdio.h>

int main () {

    int valorHorasNormais, valorHorasExtras, valorDependentes;
    float salarioBruto, salarioLiquido;

    printf ("Digite seus dados abaixo:\nValor total de horas normais: ");
    scanf ("%d", &valorHorasNormais);
    printf ("Valor total de horas extras: ");
    scanf ("%d", &valorHorasExtras);
    printf ("Valor total de dependentes: ");
    scanf ("%d", &valorDependentes);

    salarioBruto = valorHorasNormais + valorHorasExtras + valorDependentes;

    if (salarioBruto >= 100 && salarioBruto <= 500) 
        salarioLiquido = salarioBruto * 0.95 - 30;
    else if (salarioBruto >= 501 && salarioBruto <= 1300)
        salarioLiquido = salarioBruto * 0.92 * 0.92 - 80;
    else if (salarioBruto >= 1301 && salarioBruto <= 2700)
        salarioLiquido = salarioBruto * 0.85 * 0.9 - 150;
    else 
        salarioLiquido = salarioBruto * 0.75 * 0.88 - 320;

    printf ("-----------------------------------\nO salário a ser recebido é de: R$%.2f\n", salarioLiquido);

    return 0;

}