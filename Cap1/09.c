#include <stdio.h>

int main () {
    
    float num;

    printf ("Digite um número: ");
    scanf ("%f", &num);
    printf ("1/4 do número digitado é: %.1f\n", num / 4);

    return 0;

}