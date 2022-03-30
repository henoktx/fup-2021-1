#include <stdio.h>

void incializaVetor(int* pointer, int idade[], int numeroFilhos[], char sexo[], float salario[]) {

    printf("Preencha os dados abaixo:\n");

    for(int i = 0; i < *pointer; i++) {
        printf("\nIdade: ");
        scanf("%d", &idade[i]);

        printf("Sexo: ");
        scanf("\n%c", &sexo[i]);

        printf("Quantidade de filhos: ");
        scanf("\n%d", &numeroFilhos[i]);

        printf("Salario: ");
        scanf("\n%f", &salario[i]);
    }

}

float mediaSalario(int* pointer, float salario[]) {
    float salarioTotal = 0;
    
    for(int i = 0; i < *pointer; i++) {
        salarioTotal += salario[i];
    }

    return salarioTotal / *pointer;
}

int menorIdade(int* pointer, int idade[]) {
    int menorIdade = idade[0];

    for(int i = 0; i < *pointer; i++) {
        if(idade[i] < menorIdade)
            menorIdade = idade[i];
    }

    return menorIdade;
}

int maiorIdade(int* pointer, int idade[]) {
    int maiorIdade = idade[0];

    for(int i = 0; i < *pointer; i++) {
        if (idade[i] > maiorIdade)
            maiorIdade = idade[i];
    }

    return maiorIdade;
}

int mulheresFilhosSalario(int* pointer, char sexo[], int quantddFilhos[], float salario[]) {
    int quantidade = 0;

    for(int i = 0; i < *pointer; i++) {
        if(sexo[i] == 'f' && quantddFilhos[i] == 3 && salario[i] <= 500)
            quantidade++;
    }

    return quantidade;
}

int main() {
    
    int quantidadeHabitantes;

    printf("Digite a quantidade de habitantes desejada: ");
    scanf("%d", &quantidadeHabitantes);
    printf("---------------------\n");


    int idade[quantidadeHabitantes], numeroFilhos[quantidadeHabitantes];
    char sexo[quantidadeHabitantes];
    float salario[quantidadeHabitantes]; 

    incializaVetor(&quantidadeHabitantes, idade, numeroFilhos, sexo, salario);

    printf("\n--------------------------------------------------------------------\n");
    
    printf("\nA média salarial entre os habitantes é: R$%.2f\n", mediaSalario(&quantidadeHabitantes, salario));

    printf("\nA menor idade entre os habitantes é de: %d anos\n", menorIdade(&quantidadeHabitantes, idade));

    printf("\nA maior idade entre os habitantes é de: %d anos\n", maiorIdade(&quantidadeHabitantes, idade));

    printf("\nQuantidade de mulheres que tem 3 filhos e recebe até 500 reais: %d\n", mulheresFilhosSalario(&quantidadeHabitantes, sexo, numeroFilhos, salario));

    return 0;
}