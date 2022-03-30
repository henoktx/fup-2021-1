#include <stdio.h>

int main () {

    int num1, num2;

    printf ("Escreva um número: ");
    scanf ("%d", &num1);
    printf ("Escreva outro número: ");
    scanf ("%d", &num2);

    if (num1 >= 50 && num1 <= 200 && num2 >= -1 && num2 <= 9) 
        printf ("1\n");
    else 
        printf ("0\n");

    return 0;
}