#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void trocar(int v[], int i, int j) {
    // Troca os elementos do vetor que estão nas posições de índice i e j.
    int tmp = v[i];
    v[i] = v[j];
    v[j] = tmp;  
}

void mostrar(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int particionar(int v[], int n, int inicio, int fim, int indice_pivo){
    int pivo = v[indice_pivo];
    int c1 = inicio;
    int c2 = fim;
    //repetir enquanto os dois cursores não se cruzarem
    while(c1<=c2){    
        //avançar o cursor da esquerda até encontrar um número maior que o pivô
        while(c1<=c2 && v[c1]<=pivo){
            c1++;
        }
        //avançar o cursor da direita até encontrar um número menor que o pivô
        while(c1<=c2 && v[c2]>=pivo){
            c2--;
        }
        //trocar os dois números de posição
        if(c1<c2){
            trocar(v,c1,c2);
        }
    }
    //posicionar o pivô
    trocar(v, indice_pivo, c2); 
    //retornar a nova posição do pivô
    return c2;
}

void quick_sort(int v[], int n, int inicio, int fim) {
    mostrar(v,n);
    // Caso base
    if (fim - inicio < 1){
        return;
    }
    // Escolher o pivô
    int indice_pivo = inicio;
    // Particionar ao redor do pivô
    indice_pivo = particionar(v, n, inicio, fim, indice_pivo);
    // Ordenar a primeira partição
    quick_sort(v, n, inicio, indice_pivo - 1);
    // Ordenar a segunda partição
    quick_sort(v, n, indice_pivo + 1, fim);
}

int main() {
    srand(time(NULL));
    int n; // quantidade de elementos do vetor
    printf("Número de elementos: ");
    scanf("%d", &n);

    int v[n];
    for (int i = 0; i < n; i++) {
        v[i] = rand() % (n*10) + 1;
    }

    mostrar(v, n);
    quick_sort(v, n, 0, n-1);
    mostrar(v, n);
    return 0;
}
