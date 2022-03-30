#include <stdio.h>

int main () {

    int quantidadePecas;
    float salario;

    printf ("Quantidade de peças produzidas: ");
    scanf ("%d", &quantidadePecas);

    if (quantidadePecas <= 500) {
        salario = 440;
        printf ("Seu salário é: R$%.2f\n", salario);
    } else if (quantidadePecas > 500 && quantidadePecas <= 750) {
        salario = 0.5 * (quantidadePecas - 500) + 440;
        printf ("Seu salário é: R$%.2f\n", salario);
    } else {
        salario = 0.75 * (quantidadePecas - 750) + 550;
        printf ("Seu salário é: R$%.2f\n", salario);
    }
    
    return 0;

}