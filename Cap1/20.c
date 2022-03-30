#include <stdio.h>

int main () {

   float dolar, cotacao, real;

   printf ("Digite o valor em dólar: ");
   scanf ("%f", &dolar);
   printf ("Digite a cotação do dólar hoje: ");
   scanf ("%f", &cotacao);

   real = dolar * cotacao;

   printf ("O valor em real é: %.2f", real);

}