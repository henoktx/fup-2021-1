#include <stdio.h>

int main() {
    
    float maiorNota = 0, menorNota = 11, soma = 0, media;
    int contador = 0, juizes;

    printf ("Digite a quantidade de júizes: ");
    scanf ("%d", &juizes);
    printf("Digite as notas dos juízes abaixo:\n");

    while(contador < juizes) {
        float notaTemp;
        printf("Juiz %d: ", contador + 1);
        scanf("%f", &notaTemp);

        soma += notaTemp;

        if(notaTemp > maiorNota) 
            maiorNota = notaTemp;
        else if(notaTemp < menorNota)
            menorNota = notaTemp;

        contador++;
    }

    soma -= maiorNota + menorNota;
    media = soma / (juizes - 2);
   
    printf("---------------------------------------------------------------------------\n");
    printf("A média das notas dos juízes, desconsiderando a maior e a menor nota é: %.1f\n", media);

    return 0;
}