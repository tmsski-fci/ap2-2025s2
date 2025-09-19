#include <stdio.h>

int busca_binaria (int valor, int v[], int n){
    int contador = 0;
    // definir trecho pelo menor e pelo maior índice
    int menor_indice = 0;
    int maior_indice = n - 1;

    // repetir enquanto houver elementos no trecho de busca
    while(menor_indice <= maior_indice) {
        contador++;
        // calcular o índice médio
        int indice_medio = (menor_indice + maior_indice) / 2;
        // se o valor que está no índice médio é o que busco
        if (v[indice_medio] == valor) {
            // encontrei! essa é a resposta
            printf("Contador = %d\n", contador);
            return indice_medio;
        }
        // se o valor que está no índice médio é maior que o que busco
        else if (v[indice_medio] > valor) {
            // o valor que busco está à esquerda
            //printf("pra esquerda...\n");
            maior_indice = indice_medio - 1;
        }
        // se o valor que está no meio é menor que aquele que busco
        else if (v[indice_medio] < valor) {
            // o valor que busco está à direita
            //printf("pra direita...\n");
            menor_indice = indice_medio + 1;
        }
    }
    printf("Contador = %d\n", contador);
    // elemento não foi encontrado
    return -1;
}


int busca_linear (int valor, int v[], int n){
    int contador = 0;
    int resposta = -1;
    //Percorrer o vetor
    int i = 0; 
    while (i < n){
        contador++;
        //Se o valor da posição atual for igual ao valor buscado
        if (v[i] == valor){
            //Armazenar a posição do valor atual
            resposta = i; 
            //Para de percorrer o vetor
            break; 
        }
        //printf("mais para a direita...");
        i++;
    }
    printf("Contador = %d\n", contador);
    return resposta;
}

int main(){
    printf("Quantidade de elementos: ");
    int n;
    scanf("%d", &n);

    int idades[n];
    
    for(int i=0; i<n; i++){
        idades[i] = i+1;
    }
    
    int m;
    m = n+1;

    int indice;
    printf ("\nbusca linear em arrays\n");
    indice = busca_linear(m,idades,n);
    printf("o valor buscado está no índice %d do vetor\n", indice);

    printf ("\nbusca binária em arrays\n");
    indice = busca_binaria(m,idades,n);
    printf("o valor buscado está no índice %d do vetor\n", indice);
    return 0;
}