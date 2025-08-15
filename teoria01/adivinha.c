#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
int main(){
    printf("Jogo de adivinhação\n");
    srand(time(NULL));
    // sortear um número de 1 a 100
    int sorteado;
    sorteado = rand() % 100 + 1;
    //printf("sorteei %d\n", sorteado);
    // imprimir o desafio
    printf("Sorteei um numero de 1 a 100. Tente adivinhar!\n");

    // inicializar contador
    int contador = 0;

    // repetir enquanto o jogo não acaba
    bool acaba = false; 
    while(!acaba){
        // ler o palpite do usuário
        int palpite;
        printf("Seu palpite: ");
        scanf ("%d", &palpite);
        // comparar o palpite com o valor sorteado
        // se forem iguais
        if(sorteado == palpite) {
            // dar mensagem de parabéns e terminar o jogo
            printf("Parabens voce acertou \n");
            acaba = true;
        }
        // se palpite for maior que valor sorteado
        else if(palpite > sorteado){
            // dar mensagem de que o número sorteado é menor
            printf("menos...\n");
        }
        // se palpite for menor que valor sorteado
        else if (palpite < sorteado){ 
            // dar mensagem de que o número sorteado é maior
            printf("mais...\n");
        }
        contador++;
    }
    printf("Você acertou em %d tentativas\n", contador);
    return 0;
}