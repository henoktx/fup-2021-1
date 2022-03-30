#include <stdio.h>

int mdc(int num1, int num2) {
    int contador = 1, resultado1, resultado2, maximoDivisorComum;

    while (contador <= (num1 < num2 ? num1 : num2)) {
        resultado1 = num1 % contador;
        resultado2 = num2 % contador;

        if (resultado1 == 0 && resultado2 == 0)
            maximoDivisorComum = contador;
        
        contador++;
    }

    return maximoDivisorComum;
}

int main() {
    int numero1, numero2;
    
    printf("Digite um número: ");
    scanf("%d", &numero1);
    printf("Digite um número: ");
    scanf("%d", &numero2);

    
    printf("----------------------------------\n");
    printf("O MDC dos números digitados é: %d", mdc(numero1, numero2));

    return 0;
}