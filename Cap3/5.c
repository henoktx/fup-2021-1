#include <stdio.h>

int main() {
    
    int num, resultado, contador = 2;


    printf("Digite um número: ");
    scanf ("%d", &num);

    while(contador < num) {
        resultado = num % contador;

        if (resultado == 0) {
            printf ("O número digitador não é primo.\n");
            return 0;
        }
        contador++;
    }

    printf ("O número digitado é primo.\n");

    return 0;
}