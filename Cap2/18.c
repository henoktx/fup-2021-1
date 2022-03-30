#include <stdio.h>

int main () {

    int resposta;
    float consumo, conta;

    printf ("Com base na lista abaixo:\n1. Residencial\n2. Comercial\n3. Industrial\n");
    printf ("Digite o número equivalente a sua conta: ");
    scanf ("%d", &resposta);
    printf ("Digite o consumo de água por metros cúbicos: ");
    scanf ("%f", &consumo);
    
    if (resposta == 1) {
        conta = 0.05 * consumo + 5;
        printf ("-----------------------------\nTotal a pagar: R$%.2f\n", conta);
    } else if (resposta == 2) {
        if (consumo > 80) {
            conta = 0.03 * (consumo - 80) + 500;
            printf ("-----------------------------\nTotal a pagar: R$%.2f\n", conta);
        } else {
            conta = 500;
            printf ("-----------------------------\nTotal a pagar: R$%.2f\n", conta);
        }
    } else {
        if (consumo > 100) {
            conta = 0.04 * (consumo - 100) + 800;
            printf ("-----------------------------\nTotal a pagar: R$%.2f\n", conta);
        } else {
            conta = 800;
            printf ("-----------------------------\nTotal a pagar: R$%.2f\n", conta);
        }
    }

    return 0;

}