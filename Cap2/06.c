#include <stdio.h>

int main () {

    int num1, num2, resto;

    printf ("Digite um número: ");
    scanf ("%d", &num1);
    printf ("Digite outro número: ");
    scanf ("%d", &num2);

    if (num2 == 0) 
        printf ("Não será possível realizar essa divisão");
    else{
        resto = num1 % num2;
        if (resto == 0) 
            printf ("%d é divisível por %d\n", num1, num2);
        else 
            printf ("%d não é divisível por %d\n", num1, num2);
    }
      
    return 0;

}