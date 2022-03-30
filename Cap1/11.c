#include <stdio.h>

int main () {

    float num1, num2;

    printf ("Digite um número: ");
    scanf ("%f", &num1);
    printf ("Digite outro número: ");
    scanf ("%f", &num2);
    printf ("A soma desses números é: %.2f\nA subtração desses números é: %.2f\n", num1 + num2, num1 - num2);
    printf ("A multiplicação entre esses números é: %.2f\nA divisão entre esses números é: %.2f\n", num1 * num2, num1 / num2);

    return 0;

}