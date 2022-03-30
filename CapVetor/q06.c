#include <stdio.h>

void inicializaVetor(int tamanho, int vetor[]) {
    for(int i = 0; i < tamanho; i++){
        printf("Digite o valor na posição %d: ", i);
        scanf("%d", &vetor[i]);
    }
}

int serPrimo(int num) {
    if(num < 2)
        return 0;
    
    for(int i = 2; i < num; i++) {
        if(num % i != 0)
            return 1; 
        
    }

    return 0;
}

int qtddPrimos(int tamanho, int vetor[]) {
    int primos = 0; 
    
    for(int i = 0; i < tamanho; i++) {
        if(serPrimo(vetor[i])) 
            primos++;
    }

    return primos;
}

int main() {
    
    int tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    inicializaVetor(tamanho, vetor);

    printf("------------------------------------------\n");
    printf("Quantidade de primos presentes no vetor: %d\n", qtddPrimos(tamanho, vetor));
    
    return 0;
}