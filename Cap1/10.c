#include <stdio.h>

int main () {
    
    float num1, num2, num3, mediaAritmetica;
    
    printf ("Digite um número: ");
    scanf ("%f", &num1);
    printf ("Digite outro número: ");
    scanf ("%f", &num2);
    printf ("Digite mais um número: ");
    scanf ("%f", &num3);

    mediaAritmetica = (num1 + num2 + num3) / 3;

    printf ("A média Arimética dos números digitados é: %.2f\n", mediaAritmetica);

    return 0;

}