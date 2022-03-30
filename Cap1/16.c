#include <stdio.h>

int main () {

    float salario, percent, reajusteSalario;

    printf ("Digite seu salário atual: ");
    scanf ("%f", &salario);
    printf ("Digite o percentual do reajuste desejado: ");
    scanf ("%f", &percent);

    reajusteSalario = (salario * (percent + 100)) / 100;

    printf ("O salário com reajuste é: %.2f\n", reajusteSalario);

    return 0;

}