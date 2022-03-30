#include <stdio.h>

int main() {
    
    int nesimoTermo, contador = 2, antecessor1 = 1, antecessor2 = 1;

    printf("Digite a posição do termo desejado: ");
    scanf("%d", &nesimoTermo);

    while (contador < nesimoTermo) {
        int soma = antecessor1 + antecessor2;
        antecessor1 = antecessor2; 
        antecessor2 = soma;

        contador++;
    }

    printf("--------------------------\nO valor do %dº termo é: %d.\n", nesimoTermo, antecessor2);

    return 0;
}