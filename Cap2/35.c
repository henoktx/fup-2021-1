#include <stdio.h>
#include <math.h>

int main () {

    int x1, x2, y1, y2, r;
    float distancia;

    printf ("Digite as coordenadas dos pontos em questão:\nX do ponto 1: ");
    scanf ("%d", &x1);
    printf ("Y do ponto 1: ");
    scanf ("%d", &y1);
    printf ("X do ponto 2: ");
    scanf ("%d", &x2);
    printf ("Y do ponto 2: ");
    scanf ("%d", &y2);
    printf ("Digite o raio das circunferências: ");
    scanf ("%d", &r);

    distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    if (distancia <= 2 * r)
        printf ("Colidiu\n");
    else 
        printf ("Não colidiu\n");

    return 0;

}