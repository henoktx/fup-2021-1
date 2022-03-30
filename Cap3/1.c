#include <stdio.h> 

int main() {

    int num, resultado = 1;

    printf("Digite um número inteiro maior que 0: ");
    scanf("%d", &num);

    while(num > 0) {
        resultado *= num;
        
        num--;
    }

    printf("---------------------------------------\nO fatorial do número digitado é: %d\n", resultado);

    return 0;

}