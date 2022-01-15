#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMERO_DE_TENTATIVAS 3

int main() {
 
    // imprimindo cabecalho bonito do jogo
    printf("\n\n");
    printf("          P  /_\\  P                              \n");
    printf("         /_\\_|_|_/_\\                            \n");
    printf("     n_n | ||. .|| | n_n         Bem vindo ao     \n");
    printf("     |_|_|nnnn nnnn|_|_|     Jogo de Adivinhacao! \n");
    printf("    |\" \"  |  |_|  |\"  \" |                     \n");
    printf("    |_____| ' _ ' |_____|                         \n");
    printf("          \\__|_|__/                              \n");
    printf("\n\n");
 
    // declarando variaveis que serao usadas mais a frente
    int chute;
    int acertou;
    int nivel;
    int totaldetentativas;
    int maximo;
    int minimo;
 
    // definindo a quantidade de pontos inicial
    double pontos = 1000;
    
    // gerando um numero secreto aleatorio
    int numerosecreto;
 
    // escolhendo o nivel de dificuldade
    printf("Qual o nivel de dificuldade?\n");
    printf("(1) Facil (2) Medio (3) Dificil\n\n");
    printf("Escolha: ");
 
    scanf("%d", &nivel);
 
    switch(nivel) {
        case 1: 
            totaldetentativas = 20;
            break;
        case 2:
            totaldetentativas = 15;
            break;
        default:
            totaldetentativas = 6;
            break;
    }
    printf("Escolha um inteiro positivo qualquer para ser definido como maximo: ");
    scanf("%d", &maximo);
    printf("Escolha um inteiro positivo qualqu1er para ser definido como minimo: ");
    scanf("%d", &minimo);

        if (maximo<=minimo) {
            printf("O valor maximo tem que ser maior que o valor minimo!");
        } else if (numerosecreto = minimo + ( rand() % maximo )) {
            printf("Advinhe o numero entre %d e %d\n", minimo, maximo);
        }
    // loop principal do jogo
    for(int i = 1; i <= totaldetentativas; i++) {
 
        printf("-> Tentativa %d de %d\n", i, totaldetentativas);
 
        printf("Chute um numero: ");
        scanf("%d", &chute);
 
        // tratando chute de numero negativo
        if(chute < 0) {
            printf("Voce nao pode chutar numeros negativos\n");
            i--;
            continue;
        }
 
        // verifica se acertou, foi maior ou menor
        acertou = chute == numerosecreto;
 
        if(acertou) {
            break;
        } else if(chute > numerosecreto) {
            printf("\nSeu chute foi maior do que o numero secreto!\n\n");
        } else {
            printf("\nSeu chute foi menor do que o numero secreto!\n\n");
        }
 
        // calcula a quantidade de pontos
        double pontosperdidos = abs(chute - numerosecreto) / 2.0;
        pontos = pontos - pontosperdidos;
    }
 
    // imprimindo mensagem de vitoria ou derrota
    printf("\n");
    if(acertou) {
        printf("             OOOOOOOOOOO               \n");
        printf("         OOOOOOOOOOOOOOOOOOO           \n");
        printf("      OOOOOO  OOOOOOOOO  OOOOOO        \n");
        printf("    OOOOOO      OOOOO      OOOOOO      \n");
        printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n");
        printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
        printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
        printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n");
        printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO     \n");
        printf("      OOOOOO   OOOOOOOOO   OOOOOO      \n");
        printf("         OOOOOO         OOOOOO         \n");
        printf("             OOOOOOOOOOOO              \n");
        printf("\nParabens! Voce acertou!\n");
        printf("Voce fez %.2f pontos. Ate a proxima!\n\n", pontos);
    } else {
 
        printf("       \\|/ ____ \\|/    \n");   
        printf("        @~/ ,. \\~@      \n");   
        printf("       /_( \\__/ )_\\    \n");   
        printf("          \\__U_/        \n");
 
        printf("\nVoce perdeu! Tente novamente!\n\n");
    }
 
 
}
