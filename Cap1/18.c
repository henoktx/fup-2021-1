#include <stdio.h>

int main () {
    
    float tempo, velocidade, distancia, litrosConsumidos;

    printf ("Digite o tempo decorrido na viagem: ");
    scanf ("%f", &tempo);
    printf ("Digite a velocidade média da viagem: ");
    scanf ("%f", &velocidade);

    distancia = tempo * velocidade;
    litrosConsumidos = distancia / 12;

    printf ("A distância percorrida foi: %.1f\nE a quantidade de litros consumidos na viagem foi: %.1f\n", distancia, litrosConsumidos);

    return 0;

}