#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprimir(int j) {
    if (j==0){
        printf ("papel \n");
    }
    else if (j==1){
        printf ("tesoura \n");
    }
    else {
        printf ("pedra \n");
    }    
}

/*
    Faz a jogada e retorna se o computador ganhou (1) ou não (0)
*/
int jogar() {
    int resposta;
    int jogada;
    jogada=rand()%3;
    imprimir(jogada);
    printf("Eu ganhei? (1 sim/0 não)\n");
    scanf("%d", &resposta);
    return resposta;
}

int main () {
    srand (time (NULL));

    int placar_computador = 0;

    placar_computador += jogar();
    
    placar_computador += jogar();

    if (placar_computador == 1) {
        placar_computador += jogar();
    }

    if (placar_computador == 2) {
        printf("Eu venci a rodada!\n");
    }
    else {
        printf("Fui derrotado!\n");
    }

    return 0 ;
}