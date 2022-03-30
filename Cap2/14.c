#include <stdio.h>

int main () {

    int i, a, b, c;

    printf ("Digite um número para I: ");
    scanf ("%d", &i);
    printf ("Digite um número para A: ");
    scanf ("%d", &a);
    printf ("Digite um número para B: ");
    scanf ("%d", &b);
    printf ("Digite um número para C: ");
    scanf ("%d", &c);

    if (i == 1) {
        if (a > b && a > c) {
            if (b > c)
                printf ("%d, %d, %d.\n", a, b, c);
            else 
                printf ("%d, %d, %d.\n", a, c, b);
        } else if (b > a && b > c) {
            if (a > c)
                printf ("%d, %d, %d.\n", b, a, c);
            else 
                printf ("%d, %d, %d.\n", b, c, a);
        } else {
            if (a > b)
                printf ("%d, %d, %d.\n", c, a, b);
            else 
                printf ("%d, %d, %d.\n", c, b, a);
        }
    } else if (i == 2) {
        if (a < b && a < c) {
            if (b < c)
                printf ("%d, %d, %d.\n", c, b, a);
            else 
                printf ("%d, %d, %d.\n", b, c, a);
        } else if (b < a && b < c) {
            if (a < c)
                printf ("%d, %d, %d.\n", c, a, b);
            else 
                printf ("%d, %d, %d.\n", a, c, b);
        } else {
            if (a < b)
                printf ("%d, %d, %d.\n", b, a, c);
            else 
                printf ("%d, %d, %d.\n", a, b, c);
        }
    } else {
        if (a > b && a > c) 
            printf ("%d, %d, %d.\n", c, a, b);
        else if (b > a && b > c)
            printf ("%d, %d, %d.\n", a, b, c);
        else 
            printf ("%d, %d, %d.\n", a, c, b);
        
    }

    return 0;
}