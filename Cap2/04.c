#include <stdio.h>

int main () {

    float num1, num2, num3;

    printf ("Escreva o primeiro número: ");
    scanf ("%f", &num1);
    printf ("Escreva o segundo número: ");
    scanf ("%f", &num2);
    printf ("Escreva o terceiro número: ");
    scanf ("%f", &num3);

    if (num1 > num2 && num1 > num3) {
        printf ("%.1f É o maior número.\n", num1);
    }
    else if (num2 > num1 && num2 > num3) {
        printf ("%.1f É o maior número.\n",  num2);
    } 
    else {
        printf ("%.1f É o maior número.\n", num3);
    }

    return 0;

}