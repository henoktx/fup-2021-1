#include <stdio.h>
#include <string.h>

typedef struct {
    int identificador;
    char nome [100];
    char endereco [50];
    float altura;
    int idade;
    float peso;
} Paciente;

void inicilizarLista(Paciente lista[], int tam) {
    
    for(int i = 0; i < tam; i++) {
        lista[i].identificador = -1;
    }
}

void inserirPaciente(Paciente lista[], int tam) {
    
    for(int i = 0; i < tam; i++) {
        if(lista[i].identificador == -1) {
            lista[i].identificador = i;
            
            printf("\n\n---------- Inserindo pacientes ----------\n");
            printf("\nDigite o Nome do paciente: ");
            scanf("\n%[^\n]", lista[i].nome);
            printf("Digite a Idade do paciente: ");
            scanf("%d", &lista[i].idade);
            printf("Digite a Altura do paciente: ");
            scanf("%f", &lista[i].altura);
            printf("Digite o Peso do paciente: ");
            scanf("%f", &lista[i].peso);
            printf("Digite o Endereço do paciente: ");
            scanf("\n%[^\n]", lista[i].endereco); 
            printf("\n");

            break;
        }
    }
}


//Usei essas duas condições pois quando se o usuário desejar imprimir um paciente após ter apagado-o, para verificar, dará "paciente não encontrado"
int buscaNome(char nome[], Paciente lista[], int tam) {
    
    for(int i = 0; i < tam; i++) {
        if(lista[i].identificador != -1 && (strcmp(lista[i].nome, nome) == 0)) {
            return i;
        }
    }

    return -1;
}

void imprimirPaciente(char nome[], Paciente lista[], int tam) {
    
    int resultado = buscaNome(nome, lista, tam); 

    if(resultado != -1) {
        printf("\n--------------- Paciente %d --------------\n", lista[resultado].identificador);
        printf("\n\t\tNome: %s\n", lista[resultado].nome);
        printf("\t\tIdade: %d anos\n", lista[resultado].idade);
        printf("\t\tAltura: %.2f m\n", lista[resultado].altura);
        printf("\t\tPeso: %.2f Kg\n", lista[resultado].peso);
        printf("\t\tEndereço: %s\n", lista[resultado].endereco);
    } else { 
        printf("\n-----------------------------------------\n");
        printf("\nPaciente não encontrado.\n");
    }
}

void editarPaciente(char nome[], Paciente lista[], int tam) {
    
    int resultado = buscaNome(nome, lista, tam);

    if(resultado != -1) { 
        printf("\n\n------------ Editando '%s' ------------\n", nome);   
        printf("\nDigite o Nome do paciente: ");
        scanf("\n%[^\n]", lista[resultado].nome);
        printf("Digite a Idade do paciente: ");
        scanf("%d", &lista[resultado].idade);
        printf("Digite a Altura do paciente: ");
        scanf("%f", &lista[resultado].altura);
        printf("Digite o Peso do paciente: ");
        scanf("%f", &lista[resultado].peso);
        printf("Digite o Endereço do paciente: ");
        scanf("\n%[^\n]", lista[resultado].endereco); 
        printf("\nPaciente editado com sucesso!\n");
    } else {
        printf("\n-----------------------------------------\n");
        printf("\nPaciente não encontrado.\n");
    }
}

int buscaID(int id, Paciente lista[], int tam) {
    
    for(int i = 0; i < tam; i++) {
        if(lista[i].identificador == id) {
            return i;
        }
    }

    return -1;
}

void apagarPaciente(int id, Paciente lista[], int tam) {
    
    int resultado = buscaID(id, lista, tam);
    char resposta;
    
    if(resultado != -1) {
        printf("\n----------------------------------------------\n");
        printf("\nDeseja mesmo apagar o paciente '%s'? ", lista[resultado].nome);
        scanf("\n%c", &resposta);
            if(resposta != 'N' && resposta != 'n'){
                lista[resultado].identificador = -1;
                printf("\nPaciente apagado com sucesso!\n");
            }
    } else {
        printf("\n-----------------------------------------\n");
        printf("\nPaciente não encontrado.\n");
    }
}

float mediaPacientes(Paciente lista[], int tam) {
    
    float soma = 0, media, aux = 0;
    
    for(int i = 0; i < tam; i++) {
        if(lista[i].identificador != -1) {
            soma += lista[i].idade;
            aux++;
        }
    }

    media = soma / aux;

    return media;
}

void pacienteMaisPesado(Paciente lista[], int tam) {
    
    float maisPesado = 0;
    int idPesado;

    for(int i = 0; i < tam; i++) {
        if(lista[i].peso > maisPesado && lista[i].identificador != -1) {
            maisPesado = lista[i].peso;
            idPesado = i;
        }
    }

    printf("\n--------------- Paciente %d ---------------\n", lista[idPesado].identificador);
    printf("\n\t\tNome: %s\n", lista[idPesado].nome);
    printf("\t\tIdade: %d anos\n", lista[idPesado].idade);
    printf("\t\tAltura: %.2f m\n", lista[idPesado].altura);
    printf("\t\tPeso: %.2f Kg\n", lista[idPesado].peso);
    printf("\t\tEndereço: %s\n", lista[idPesado].endereco);  
}

void imprimirMenu() {
    
    printf("\n----------- Prontuário Médico -----------\n\n");
    printf("\t1. Inserir um paciente;\n");
    printf("\t2. Editar um paciente;\n");
    printf("\t3. Apagar um paciente;\n");
    printf("\t4. Imprimir um paciente;\n");
    printf("\t5. Média das idades dos pacientes;\n");
    printf("\t6. Dados do paciente mais pesado;\n");
    printf("\t-1. Sair do programa;\n");
    printf("\nQual a operação desejada? ");

}

int main() {
    
    Paciente listaPacientes [500];
    
    inicilizarLista(listaPacientes, 500);
    
    int resposta, id;
    char nome[100];

    do { 
        imprimirMenu();
        scanf("%d", &resposta);

        switch (resposta) {
            case 1:
                inserirPaciente(listaPacientes, 500);
                break;

            case 2:
                printf("\nDigite o nome do paciente desejado: ");
                scanf("\n%[^\n]", nome);
                editarPaciente(nome, listaPacientes, 500);
                break;

            case 3:
                printf("\nDigite o ID do paciente: ");
                scanf("%d", &id);
                apagarPaciente(id, listaPacientes, 500);
                break;

            case 4:
                printf("\nDigite o nome do paciente desejado: ");
                scanf("\n%[^\n]", nome);
                imprimirPaciente(nome, listaPacientes, 500);
                break;

            case 5:
                printf("\n-----------------------------------------\n");
                printf("\nMédia das idades dos pacientes: %.2f\n", mediaPacientes(listaPacientes, 500));
                break;

            case 6: 
                pacienteMaisPesado(listaPacientes, 500);
                break;
            
            default:
                break;
        }
    } while(resposta != -1);
    
    return 0;
}