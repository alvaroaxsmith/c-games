#include <stdio.h>

int main() {
    printf("************************************\n");
    printf("* Bem-vindo ao Jogo de Advinhacao *\n");
    printf("************************************\n");

    int chute;
    int numerosecreto;
for(int i=1;i<=3; i++) {
    printf("Qual e o seu %do. chute? ", i);
    scanf("%d", &chute);
    printf("Seu %do. chute foi: %d\n", i, chute);

    
    int acertou = chute == numerosecreto;

    if (acertou) {
        printf("Parabens! Voce acertou!\n");
        break;
    } else {
        int maior = chute > numerosecreto;
        if (maior) {
            printf("seu chute foi maior do que o numero secreto!\n");
        } else {
            printf("Seu chute foi menor do que o numero secreto!\n");
        }
    }
}
printf("Obrigado por jogar!\n");
}