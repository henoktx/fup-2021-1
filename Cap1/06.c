#include <stdio.h>

int main () {
    
    int num;

    printf ("Digite um número: ");
    scanf ("%d", &num);
    printf ("O antecessor do número digitado é: %d\nE o sucessor dele é: %d\n", num - 1, num + 1);

    return 0;

}