#include <stdio.h>

int serPrimo(int num) {
    if(num <= 1) 
        return 0;

    int resultado, contador = 2;

    while(contador < num) {
        resultado = num % contador;
    
        if(resultado == 0) 
            return 0;
        
        contador++;
    }

    return 1;
}

int main() {
    int num1;

    printf("Digite um número: ");
    scanf("%d", &num1);

    int result = serPrimo(num1);

    printf("--------------------\n%d", result);

    return 0;
}