#include <stdio.h>

int main () {

    float notaProjeto, mediaTrabalhosPraticos, notaTeste, notaExameFinal, notaFinal;

    printf ("Digite os seus dados nos campos abaixo:\nNota do projeto: ");
    scanf ("%f", &notaProjeto);
    printf ("Media dos trablhos práticos: ");
    scanf ("%f", &mediaTrabalhosPraticos);
    printf ("Nota do teste: ");
    scanf ("%f", &notaTeste);
    printf ("Nota do exame final: ");
    scanf ("%f", &notaExameFinal);

    notaFinal = ((notaProjeto * 0.25) + (mediaTrabalhosPraticos * 0.1) + (notaTeste * 0.2) + (notaExameFinal * 0.45)) / 1;

    if (notaFinal > 8 && notaExameFinal > 7.5 && notaProjeto > 9.5) 
        printf ("----------------------------------\nAPROVADO\n");
    else 
        printf ("----------------------------------\nREPROVADO\n");

    return 0;

}