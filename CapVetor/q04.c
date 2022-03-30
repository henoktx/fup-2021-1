#include <stdio.h>

void inicializaVetor(int tamanho, int vetor[]) {
    for(int i = 0; i < tamanho; i++) {
        printf("Digite o valor na posição %d do vetor: ", i);
        scanf("%d", &vetor[i]);
    }
}

int par(int tamanho, int vetor[]) {
    int qntddPares = 0;
    
    for(int i = 0; i < tamanho; i++)
        if(vetor[i] % 2 == 0)
            qntddPares++;
     
    return qntddPares;
}

int main() {
    
    int tamanhoX;

    printf("Digite o tamanho desejado para o vetor: ");
    scanf("%d", &tamanhoX);

    printf("-----------------------------------------\n");

    int vetorX[tamanhoX];
    
    inicializaVetor(tamanhoX, vetorX);

    printf("------------------------------------------------\n");

    printf("A quantidade de pares presentes nesse vetor é: %d\n", par(tamanhoX, vetorX));

    return 0;
}