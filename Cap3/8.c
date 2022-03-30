#include <stdio.h>

int main() {
    
    int num1, num2, contador = 1, resultado1, mdc;

    printf("Digite um número: ");
    scanf("%d", &num1);
    printf("Digite um número: ");
    scanf("%d", &num2);

    while (contador <= (num2 < num1 ? num2 : num1)) {
        int resultado2;

        resultado1 = num1 % contador;
        resultado2 = num2 % contador;

        if (resultado1 == 0 && resultado2 == 0)
            mdc = contador; 

        contador++;
    }

    printf("--------------------------------\nO MDC dos números digitados é: %d.\n", mdc);

    return 0;
}