#include <stdio.h>

int main () {

    float num;

    printf ("Digite um número: ");
    scanf ("%f", &num);
    printf ("O quadrado do número digitado é: %.2f\n", num * num);

    return 0;

}