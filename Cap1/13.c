#include <stdio.h>

int main () {

    float poupanca, reajustePoupanca;

    printf ("Digite o saldo da sua conta poupança: ");
    scanf ("%f", &poupanca);

    reajustePoupanca = (poupanca * 102) / 100;

    printf ("A sua conta com reajuste de 2 por cento é: %.2f\n", reajustePoupanca);

    return 0;

}