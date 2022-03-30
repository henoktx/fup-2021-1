#include <stdio.h>

int main () {

    float num1, num2;

    printf ("Digite um número: ");
    scanf ("%f", &num1);
    printf ("Digite outro número: ");
    scanf ("%f", &num2);

    if (num1 > num2) {
        printf ("%.1f é o maior número.\n", num1);
    }
    else {
        printf ("%.1f é o maior número.\n", num2);
    }

    return 0;

}