/*
Escreva um programa que imprima todos os números pares entre 2 e 50.
Para saber se o número é par, basta você ver se o resto da divisão do numero por 2 é igual a 0
*/
#include <stdio.h>

int main() {
    for (int i = 2; i <= 50; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n",i);
        }
        
    }
    
    
}