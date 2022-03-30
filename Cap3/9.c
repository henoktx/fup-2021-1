#include <stdio.h>

int main() {
    
    int contador = 1, num, soma = 0;

    printf("Digite um número: ");
    scanf("%d", &num);

    while (contador < num) {
        if (num % contador == 0)
            soma += contador;

        contador++;
    }

    if (soma == num) 
        printf ("O número digitado é perfeito.\n");
    else 
        printf ("O número digitado não é perfeito.\n");
    
    return 0;
}