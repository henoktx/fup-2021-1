#include <stdio.h>

int main () {

    int num, resto;

    printf ("Digite um número: ");
    scanf ("%d", &num);

    resto = num % 2; 

    if (resto == 0) {
        printf ("O número digitado é par.\n");
    }
    else {
        printf ("O número digitado é ímpar.\n");
    }

    return 0;

}