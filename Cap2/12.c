#include <stdio.h>

int main () {

    float nota1, nota2;

    printf ("Digite a nota do aluno X: ");
    scanf ("%f", &nota1);
    printf ("Digite a nota do aluno Y: ");
    scanf ("%f", &nota2);

    if (nota1 > nota2) 
        printf ("O aluno X obteve melhor desempenho.\n");
    else 
        printf ("O aluno Y obeteve melhor desempenho.\n");


    return 0;
}