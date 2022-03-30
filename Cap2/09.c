#include <stdio.h>

int main () {

    float x, y;

    printf ("Digite a coordenada X do ponto: ");
    scanf ("%f", &x);
    printf ("Digite a coordenada Y do ponto: ");
    scanf ("%f", &y);

    if (x > 0 && y > 0)
        printf ("1-\n");
    else
        printf ("0-\n");

    
    return 0;
}