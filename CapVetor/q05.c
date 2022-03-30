#include <stdio.h>

void inicializaVetor(int tamanho, float vetor[]) {
    for(int i = 0; i < tamanho; i++){
        printf("Digite o valor na posição %d: ", i);
        scanf("%f", &vetor[i]);
    }
}

void organizadorVetor(int tamanho, float vetor[]) {
    for(int i = 0; i < tamanho; i++) {
       for(int h = 0; h < tamanho; h++) {
           if(vetor[i] > vetor[h]) {
               int aux = vetor[i];
               vetor[i] = vetor[h];
               vetor[h] = aux;
           }
        }
    }
}

void imprimeVetor(int tamanho, float vetor[]) { 
    for(int i = 0; i < tamanho; i++) {
        printf("| %.2f ", vetor[i]);
    }

    printf("|\n");
}

int main() {
    
    int tamanhoVetorA;
    
    printf("Digite o tamanho desejado para o vetor: ");
    scanf("%d", &tamanhoVetorA);

    float vetorA[tamanhoVetorA];

    inicializaVetor(tamanhoVetorA, vetorA);

    printf("---------------------------------------\n");
    printf("Vetor organizado em ordem descrescente:\n");
    
    organizadorVetor(tamanhoVetorA, vetorA);

    imprimeVetor(tamanhoVetorA, vetorA);

    return 0;
}