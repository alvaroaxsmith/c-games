#include <stdio.h>

int main() {
    printf("************************************\n");
    printf("* Bem-vindo ao Jogo de Advinhacao *\n");
    printf("************************************\n");

    int chute;
    int numerosecreto;

    printf("Qual e o seu chute? ");
    scanf("%d", &chute);
    printf("Seu chute foi: %d\n", chute);

    
    int acertou = chute == numerosecreto;

    if (acertou) {
        printf("Parabens! Voce acertou!\n");
    } else {
        int maior = chute > numerosecreto;
        if (maior) {
            printf("seu chute foi maior do que o numero secreto!\n");
        } else {
            printf("Seu chute foi menor do que o numero secreto!\n");
        }
    }
}