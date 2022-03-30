#include <stdio.h>

float calculadora(float num1, float num2, char operacao) {
    switch (operacao) {
        case '+':   
            return num1 + num2;

        case '-':
            return num1 - num2;

        case '*':
            return num1 * num2;
        
        case '/':
            return num1 / num2;
    }
}

int main() {
    float numero1, numero2;
    char operacao;

    printf("Digite um número: ");
    scanf("%f", &numero1);
    printf("Digite um número: ");
    scanf("%f", &numero2);
    printf("Digite a operação desejada: ");
    scanf("\n%c", &operacao);

    printf("-----------------------------------------------\n");
    printf("O resultado da operação %.2f %c %.2f = %.2f", numero1, operacao, numero2, calculadora(numero1, numero2, operacao));    

    return 0;
}