#include <stdio.h>

void inicializaVetor(int tamanhoA, int vetorA[], int tamanhoB, int vetorB[]) {
    for(int i = 0; i < tamanhoA; i++){
        printf("Digite o valor na posição %d (A): ", i);
        scanf("%d", &vetorA[i]);
    }

    printf("-----------------------------------\n");

    for(int i = 0; i < tamanhoB; i++){
        printf("Digite o valor na posição %d (B): ", i);
        scanf("%d", &vetorB[i]);
    }
}

int parteOutro(int tamanhoA, int vetorA[], int tamanhoB, int vetorB[]) {
    int sequencia = 0, repeticao = 0;

    if(tamanhoA >= tamanhoB) {
            for(int i = 0, j = 0; i < tamanhoA; i++) {
            if(vetorA[i] == vetorB[j]) {
                sequencia++;
                j++;
            } 
            else {
                sequencia = 0;
                j = 0;
            }

            if (sequencia == tamanhoB) {
                sequencia = 0;
                repeticao++;
                j = 0;
            }
        }
    }
    else if(tamanhoB > tamanhoA) {
        for(int i = 0, j = 0; i < tamanhoB; i++) {
            if(vetorB[i] == vetorA[j]) {
                sequencia++;
                j++;
            } 
            else {
                sequencia = 0;
                j = 0;
            }

            if (sequencia == tamanhoA) {
                sequencia = 0;
                repeticao++;
                j = 0;
            }
        }
    }
        
    return repeticao;
}

int main() {
    
    int tamanhoA, tamanhoB;

    printf("Digite o tamanho do vetor A: ");
    scanf("%d", &tamanhoA);
    printf("Digite o tamanho do vetor B: ");
    scanf("%d", &tamanhoB);

    int vetorA[tamanhoA], vetorB[tamanhoB];

    inicializaVetor(tamanhoA, vetorA, tamanhoB, vetorB);

    printf("-----------------------------------\n");
    printf("Vetor parte do outro: %d vez(es)\n", parteOutro(tamanhoA, vetorA, tamanhoB, vetorB));

    return 0;
}