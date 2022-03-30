#include <stdio.h>

int main () {
    
    float produto, percentDesconto, desconto;

    printf ("Digite o preço do produto: ");
    scanf ("%f", &produto);
    printf ("Digite o percentual do desconto desejado: ");
    scanf ("%f", &percentDesconto);

    desconto = (produto * percentDesconto) / 100;

    printf ("Valor do desconto: %.2f\n", desconto);
    printf ("Preço do produto com o desconto incluso: %.2f\n", produto - desconto);

    return 0;

}