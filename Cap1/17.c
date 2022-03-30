#include <stdio.h>

int main () {

    float c, f; 

    printf ("Digite o valor em graus centígrados: ");
    scanf ("%f", &c);

    f = (9 * c + 160) / 5;

    printf ("O valor convertido para Fahrenheit é: %.1f\n", f);

    return 0;

}