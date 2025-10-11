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

void selection_sort(int v[], int n) {
    //Percorrer o vetor
    for (int i= 0;i<n-1;i++){
        //Procurar a posição do menor valor a partir da posição atual
        //Assumir que a posição de menor valor é a atual
        int indice_menor = i;
        //Percorrer o vetor a partir da posição atual
        for (int j = i+1;j<n;j++){
            //Se o valor atual do segundo percurso for menor que o assumido
            if (v[j]<v[indice_menor]){
                //Armazenar o novo índice
                indice_menor = j;
            }
        }
        //Trocar o valor da posição atual com o valor da posição de menor valor  
        trocar(v, i, indice_menor);
        mostrar(v,n);
    }
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
    selection_sort(v, n);
    mostrar(v, n);
    return 0;
}