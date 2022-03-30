#include <stdio.h>

float potencia(float base, float expoente) {
    float resultado = 1;

    while(expoente > 0) {
        resultado *= base;

        expoente--;
    }

    return resultado;
}

int main() {
    float num1, num2;

    printf("Digite um número: ");
    scanf("%f", &num1);
    printf("Digite outro número: ");
    scanf("%f", &num2);

    printf("----------------------------------\n");
    printf("O resultado de %.2f ^ %.2f = %.2f", num1, num2, potencia(num1, num2));

    return 0;
}