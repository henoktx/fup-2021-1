#include <stdio.h>

int main() {

    int a, b, resultado = 1;

    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);

    while(b > 0) {
        resultado *= a;

        b--;
    }

    printf("-----------------------\nO valor de a ^ b é: %d\n", resultado);

    return 0;
}