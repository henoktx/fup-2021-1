#include <stdio.h>

int main () {

    int num1, num2, resto;

    printf ("Digite um número natural: ");
    scanf ("%d", &num1);
    printf ("Digite outro número natural: ");
    scanf ("%d", &num2);


    if (num1 > num2) {
        if (num2 == 0) 
            printf ("Não será possível realizar essa divisão\n");
        else {
            resto = num1 % num2;
            if (resto == 0) 
                printf ("Não foi possivel obter o resto da divisão.\n");
            else 
                printf ("O resto da divisão do maior número pelo menor é: %d\n", resto);
        }
    } else {
        if (num1 == 0) 
            printf ("Não será possível realizar essa divisão\n");
        else {
             resto = num2 % num1;
            if (resto == 0) 
                printf ("Não foi possivel obter o resto da divisão.\n");
            else 
                printf ("O resto da divisão do maior número pelo menor é: %d\n", resto);
        }
    }

    return 0;

}