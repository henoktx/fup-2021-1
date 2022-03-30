#include <stdio.h>

int main() {
    
    int resultado = 0, contador = 0;

        while(contador < 200) {
            if (contador % 3 == 0 && contador % 7 != 0) 
                resultado += contador;    
            
            contador++;
        }

    printf ("A soma dos primeiros 200 números naturais divisíveis por 3 é: %d.\n", resultado);

    return 0;
}