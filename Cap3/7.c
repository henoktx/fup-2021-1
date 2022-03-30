#include <stdio.h>

int main() {
    
    int contador = 0, multiplica = 1, num, resultado;

    printf ("Digite um número: ");
    scanf ("%d", &num);

    while(1) {
        resultado = multiplica * multiplica;

        if (resultado == num) {
            printf ("--------------------------------------------\n");
            printf("O número digitado é um quadrado perfeito, de raiz %d.\n", multiplica);
            return 0;
        } else if (resultado > num) {
            printf ("--------------------------------------------\n");
            printf ("O número digitado não é um quadrado perfeito.\n");
            return 0;
        }

        multiplica++;
    }

    return 0;
}