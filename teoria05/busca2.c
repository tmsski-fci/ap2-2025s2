#include <stdio.h>

int busca_binaria (int valor, int v[], int n){
    // definir trecho pelo menor e pelo maior índice
    int menor_indice = 0;
    int maior_indice = n - 1;

    // repetir enquanto houver elementos no trecho de busca
    while(menor_indice <= maior_indice) {
        // calcular o índice médio
        int indice_medio = (menor_indice + maior_indice) / 2;
        // se o valor que está no índice médio é o que busco
        if (v[indice_medio] == valor) {
            // encontrei! essa é a resposta
            return indice_medio;
        }
        // se o valor que está no índice médio é maior que o que busco
        else if (v[indice_medio] > valor) {
            // o valor que busco está à esquerda
            printf("pra esquerda...\n");
            maior_indice = indice_medio - 1;
        }
        // se o valor que está no meio é menor que aquele que busco
        else if (v[indice_medio] < valor) {
            // o valor que busco está à direita
            printf("pra direita...\n");
            menor_indice = indice_medio + 1;
        }
    }
    // elemento não foi encontrado
    return -1;
}

int main(){
    int idades[7] ={
        17, 18, 20, 22, 25, 37, 44
    };

    printf ("busca binária em arrays\n");
    int m;
    printf("valor a ser buscado: ");
    scanf("%d", &m);
 
    int indice;
    indice = busca_binaria(m,idades,7);
    printf("o valor buscado está no índice %d do vetor\n", indice);
    return 0;
}