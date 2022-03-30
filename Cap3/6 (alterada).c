#include <stdio.h>

int main() {
    
    int cont1 = 0, num = 2, qntdd;

    printf("Quantos números primos você deseja imprimir? ");
    scanf("%d", &qntdd);
    printf("--------------------------------------------\nNúmero(s) primo(s):\n");

    while(cont1 < qntdd) {
        int cont2 = 2, serPrimo = 1;

        while(cont2 < num) {
            if (num % cont2 == 0)
                serPrimo = 0;
            
            cont2++;
        }
        
        if(serPrimo) {
            printf("%d ", num);
            cont1++;
        }
        
        num++;
    }

    printf("\n");

    return 0;
}
