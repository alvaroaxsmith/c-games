#include <stdio.h>
# define NUMERO_DE_TENTATIVAS 3

int main() {
    printf("************************************\n");
    printf("* Bem-vindo ao Jogo de Advinhacao *\n");
    printf("************************************\n");

    int chute;
    int numerosecreto = 42;
    int ganhou = 0;
    int tentativas = 1;
while(!ganhou) {
    printf("Qual e o seu %do. chute? ", tentativas);
    scanf("%d", &chute);
    if (chute < 0) {
        printf("Voce nao pode chutar numeros negativos\n");
        continue;
    }
    printf("Seu %do. chute foi: %d\n", tentativas, chute);

    int acertou = chute == numerosecreto;
    int maior = chute > numerosecreto;

    if (acertou) {
        printf("Parabens! Voce acertou!\n");
        ganhou = 1;
    } else if(maior) {
        printf("seu chute foi maior do que o numero secreto!\n");
        } else {
            printf("Seu chute foi menor do que o numero secreto!\n");
        }
    }
    tentativas++;
}
