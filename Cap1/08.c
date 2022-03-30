#include <stdio.h>

int main () {

    int num1, num2;

    printf ("Digite um número: ");
    scanf ("%d", &num1);
    printf ("Digite outro número: ");
    scanf ("%d", &num2);

    int subtracao = num1 - num2;

    printf ("A subtração entre os números digitados é: %d\n", subtracao);

    return 0;

}