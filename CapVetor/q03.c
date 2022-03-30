#include <stdio.h> 

void inicializaVetor(int tamanhoX, int tamanhoY, int vetorX[], int vetorY[]) {
    for(int i = 0; i < tamanhoX; i++) {
        printf("Digite o valor na posição %d do vetor X: ", i);
        scanf("%d", &vetorX[i]);
    }

    printf("------------------------------------------\n");

    for(int i = 0; i < tamanhoY; i++) {
        printf("Digite o valor na posição %d do vetor Y: ", i+1);
        scanf("%d", &vetorY[i]);
    }
}

int pertence(int y, int uniao[], int tamanho) {
    for(int i = 0; i < tamanho; i++) {
        if(uniao[i] == y) {
            return 1;
        }
    }
    
    return 0;
}

int uniaoVetores(int uniao[], int x[], int y[], int tamanhoX, int tamanhoY) { 
    int tamanho = 0;
    
    for(int i = 0; i < tamanhoX; i++) {
        uniao[i] = x[i];
        tamanho++;
    }
    
    for(int i = 0; i < tamanhoY; i++) {
        if(!pertence(y[i], uniao, tamanho)){
            uniao[tamanho] = y[i];
            tamanho++;
        }
    }

    return tamanho;
}

void imprimeVetor(int uniao[], int tamanho) {
    for(int i = 0; i < tamanho; i++) {
        printf("O elemento na posição %d é: %d\n", i, uniao[i]);
    }
}

int main() {
    
    int tamanhoX, tamanhoY;
    
    printf("Digite o tamanho do vetor X: ");
    scanf("%d", &tamanhoX);
    printf("Digite o tamanho do vetor Y: ");
    scanf("%d", &tamanhoY);

    printf("------------------------------------------\n");

    int uniao[tamanhoX + tamanhoY], X[tamanhoX], Y[tamanhoY];

    inicializaVetor(tamanhoX, tamanhoY, X, Y);

    printf ("------------------------------------------\n");
    
    printf("O tamanho do vetor união é: %d\n\n", uniaoVetores(uniao, X, Y, tamanhoX, tamanhoY));

    imprimeVetor(uniao, uniaoVetores(uniao, X, Y, tamanhoX, tamanhoY));

    return 0;
}