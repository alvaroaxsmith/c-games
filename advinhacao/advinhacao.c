#include <stdio.h>
# define NUMERO_DE_TENTATIVAS 3

int main() {
    printf("************************************\n");
    printf("* Bem-vindo ao Jogo de Advinhacao *\n");
    printf("************************************\n");

    int chute;
    int numerosecreto;
for(int i=1;i<=NUMERO_DE_TENTATIVAS; i++) {
    printf("Qual e o seu %do. chute? ", i);
    scanf("%d", &chute);
    if (chute < 0) {
        printf("Voce nao pode chutar numeros negativos\n");
        i--;
        continue
    }
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