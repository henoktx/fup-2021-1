#include <stdio.h>

int main () {
    
    float altura, base, perimetro, area;

    printf ("Digite as dimensões do retângulo.\nBase: ");
    scanf ("%f", &base);
    printf ("Altura: ");
    scanf ("%f", &altura);

    perimetro = (base * 2) + (altura * 2);
    area = base * altura;

    printf ("O perímetro do retângulo é: %.2f\nE a área desse retângulo é: %.2f\n", perimetro, area);

    return 0;

}