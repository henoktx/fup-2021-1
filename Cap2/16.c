#include <stdio.h>

int main() {

    double altura, peso; 

    printf("Olá, seja bem-vindo ao IMC Calculator!\nInsira seus dados abaixo.\nAltura: ");
    scanf("%lf", &altura);
    printf("Peso: ");
    scanf("%lf", &peso);

    double imc = peso / (altura * altura);
    
    printf("-----------------------\nSeu IMC: %.1lf\n", imc);

    if (imc < 20)
        printf("Você está magro.\n");
    else if (imc > 20 && imc < 25) 
        printf("Você está no peso normal.\n");
    else
        printf("Você está obeso.\n");
    
    return 0;

}