#include <stdio.h>

int main () {

    int totalPresenca, totalAulas;
    float nota1, nota2, percentPrenseca, mediaFinal, mediaFinal2, avaliacaoFinal;

    printf ("Digite os dados nos campos abaixo:\nNota 1: ");
    scanf ("%f", &nota1);
    printf ("Nota 2: ");
    scanf ("%f", &nota2);
    printf ("Total de aulas: ");
    scanf ("%d", &totalAulas);
    printf ("Total de presenças: ");
    scanf ("%d", &totalPresenca);

    mediaFinal = (nota1 + nota2) / 2;
    percentPrenseca = (totalPresenca / (float) totalAulas) * 100;

    if (mediaFinal < 4) {
        printf ("-------------------------------\n");
        printf ("Sua media final: %.2f\nSeu percentual de presença: %.1f%%\n", mediaFinal, percentPrenseca);
        printf ("REPROVADO");
    } else if (mediaFinal >= 4 && mediaFinal < 7) {
        if (percentPrenseca < 75) {
            printf ("-------------------------------\n");
            printf ("Sua media final: %.2f\nSeu percentual de presença: %.1f%%\n", mediaFinal, percentPrenseca);
            printf ("REPROVADO");
        } else { 
            printf ("-------------------------------\n");
            printf ("Sua media final: %.2f\nSeu percentual de presença: %.1f%%\n", mediaFinal, percentPrenseca);
            printf ("-------------------------------\n");
            printf ("Digite a nota da AF: ");
            scanf ("%f", &avaliacaoFinal);
            mediaFinal2 = (mediaFinal + avaliacaoFinal) / 2;   
            if (mediaFinal2 < 5)
                printf ("---------------------------\nMédia final: %.1f\nREPROVADO", mediaFinal2);
            else 
                printf ("---------------------------\nMédia final: %.1f\nAPROVADO COM CONCEITO B", mediaFinal2);            
        }
    } else {
        if (percentPrenseca < 75) {
            printf ("-------------------------------\n");
            printf ("Sua media final: %.2f\nSeu percentual de presença: %.1f%%\n", mediaFinal, percentPrenseca);
            printf ("REPROVADO");
        } else {
            printf ("-------------------------------\n");
            printf ("Sua media final: %.2f\nSeu percentual de presença: %.1f%%\n", mediaFinal, percentPrenseca);
            printf ("APROVADO NA MÉDIA");
        }
    }   

    return 0;
}