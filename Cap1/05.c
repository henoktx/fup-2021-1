#include <stdio.h>

int main () {

    float num1, num2;

    printf ("Escreva um número: ");
    scanf ("%f", &num1);
    printf ("Escreva outro número: ");
    scanf ("%f", &num2);
    printf ("Os números digitados foram: %2.1f e %2.1f\n", num1, num2);

    return 0;

}