#include <stdio.h>

void mostrar(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

void trocar(int v[], int i, int j) {
    // Troca os elementos do vetor que estão nas posições de índice i e j.
    int tmp = v[i];
    v[i] = v[j];
    v[j] = tmp;  
}

int main() {
    int v[7] = {5, 7, 6, 8, 9, 10, 11};
    mostrar(v, 7);
    trocar(v, 1, 2);
    mostrar(v, 7);
    return 0;
}







