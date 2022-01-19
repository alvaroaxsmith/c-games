/*  Escreva um programa que imprima a soma de todos os números de 1 até
100. Ou seja, ele calculará o resultado de 1 + 2 + 3 + 4 + ... +
100. */
#include <stdio.h>

int main() {
    int i, soma = 0;

    for ( i = 0; i <= 100; i++)
    
        soma += i;
    
    
    printf("A soma de 1 a 100 sera: %d\n\n", soma);
    
}