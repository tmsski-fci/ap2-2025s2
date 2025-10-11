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

void bubble_sort(int v[], int n) {
    //Repetir N-1 vezes
    for (int cont = 0; cont < n-1; cont++){
        //Percorrer o vetor
        for (int i = 0; i < n - 1 - cont; i++){
            //Comparar o elemento atual com o próximo
            //Se o atual for maior que o próximo
            if (v[i] > v[i+1]){
                //Trocar o valor da posição atual com o da próxima posição
                trocar(v, i, i+1);
            }
            mostrar(v,n);
        }         
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
    bubble_sort(v, n);
    mostrar(v, n);
    return 0;
}