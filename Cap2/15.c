#include <stdio.h> 

int main () {

    int idadeDezena;

    printf ("Digite a dezena da sua idade: ");
    scanf ("%d", &idadeDezena);

    if (idadeDezena == 0) 
        printf ("Você é criança.\n");
    else if (idadeDezena == 10)
        printf ("Você é adolescente.\n");
    else if (idadeDezena == 20)
        printf ("Você é jovem.\n");
    else if (idadeDezena == 30)
        printf ("Você pertence a Melhor Idade.\n");
    else 
        printf ("Você é aposentado.\n");

    return 0;

}