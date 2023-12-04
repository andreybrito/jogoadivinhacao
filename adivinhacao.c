#include <stdio.h>


int main(){
    printf("**************************************\n");
    printf("Bem vindo ao nosso jogo de adivinhacao\n");
    printf("**************************************\n");

    int numerosecreto = 42;
    int chute; 
    int ganhou = 0;
    int tentativas = 1;
    int pontos = 1000;
    

    while(ganhou == 0) {
        printf("Tentativa %d \n", tentativas);
        printf("Qual e o seu chute?");
        scanf("%d", &chute);
        printf("Seu chute foi %d \n", chute);

        if (chute < 0) {
            printf("Voce nao pode chutar numeros negativos\n");
            continue;
        }

        int acertou = (chute == numerosecreto);
        int maior = (chute > numerosecreto);

        if (acertou) {
            printf("Parabens, voce acertou\n");
            printf("Jogue novamente, voce e um bom jogador\n");
            ganhou = 1;
        } else if (maior) {  
            printf("Seu chute foi maior que o numero secreto\n");
        } else {
            printf("Seu chute foi menor que o numero secreto\n");
        }

        tentativas = tentativas + 1;

        int pontosperdidos = (chute - numerosecreto) / 2;
        pontos = pontos - pontosperdidos;
    }

    printf("Fim de jogo");
}