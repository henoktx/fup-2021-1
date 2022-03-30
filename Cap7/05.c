#include <stdio.h>

int fatorial(int num) {
    int resultado = 1;

    while(num > 0) {
        resultado *= num;

        num--;
    }

    return resultado;
}

int main() { 
    int num1, result;
    
    printf("Digite um número: ");
    scanf("%d", &num1);

    printf("-------------------------------\n");
    printf("O fatorial desse número é: %d", fatorial(num1));

    return 0;
}