#include <stdio.h>
#include <ctype.h>

void coletaDados(char sexo[], int idade[], char corOlhos[], char corCabelo[]) {

    printf("Sexo - M = Masculino / F = Feminino)\nCor dos olhos - A = Azul / V = Verde / C = Castanho\n");
    printf("Cor do Cabelo - P = Preto / L = Loiro / C = Castanho\n");

    for(int i = 0; i < 10; i++) {
        printf("\nSexo: ");
        scanf("\n%c", &sexo[i]);

        printf("Idade: ");
        scanf("%d", &idade[i]);
        
        printf("Olhos: ");
        scanf("\n%c", &corOlhos[i]);

        printf("Cabelo: ");
        scanf("\n%c", &corCabelo[i]);
    }
    
}

void imprimirVetor(char sexo[], int idade[], char corOlhos[], char corCabelo[]) {
    
    printf("\n------------------------\n");

    for(int i = 0; i < 10; i++) {
        printf("\nSexo: %c", toupper(sexo[i]));
        printf("\nIdade: %d", toupper(idade[i]));
        printf("\nCor dos olhos: %c", toupper(corOlhos[i]));
        printf("\nCor dos cabelos: %c\n", toupper(corCabelo[i]));
    }
}

float mediaLoiros(int idade[], char corCabelo[]) {
    
    int somaIdades = 0, quantidade = 0;
    
    for(int i = 0; i < 10; i++) {
        if(toupper(corCabelo[i]) == 'L') {
            quantidade++;
            somaIdades += idade[i];
        }
    }

    return (float) somaIdades / quantidade;
}

int qtdd30anos(int idade[], char sexo[]) {

    int quantidade = 0;

    for(int i = 0; i < 10; i++) {
        if(toupper(sexo[i]) == 'M' && idade[i] > 30) {
            quantidade++;
        }
    }

    return quantidade;
}

int qtddCabeloPreto(char sexo[], char corCabelo[]) {

    int quantidade = 0;

    for(int i = 0; i < 10; i++) {
        if(toupper(sexo[i]) == 'F' && toupper(corCabelo[i]) == 'P') {
            quantidade++;
        }
    }

    return quantidade;
}


int main() {
    
    char sexo[10], corOlhos[10], corCabelo[10];
    int idade[10];

    printf("Digite os dados abaixo:");

    coletaDados(sexo, idade, corOlhos, corCabelo);

    imprimirVetor(sexo, idade, corOlhos, corCabelo);

    printf("\n-------------------------------------------------\n");
    
    printf("\nA idade média das pessoas loiras é: %.2f\n", mediaLoiros(idade, corCabelo));

    printf("\nA quantidade de homens acima dos 30 anos é: %d\n", qtdd30anos(idade, sexo));

    printf("\nA quantidade de mulheres de cabelo preto é: %d\n", qtddCabeloPreto(sexo, corCabelo));
    
    return 0;
}
