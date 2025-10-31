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

void merge(int v1[], int n1, int v2[], int n2, int v[], int n){
    int i1 = 0, i2 = 0;
    int i = 0;
    // Percorrer os dois vetores (v1 e v2) ate um deles acabar
    while(i1<n1 && i2<n2){
    
        // Comparar o elemento da primeira metade com o da segunda
        // Colocar o menor elemento no vetor original 
        if (v1[i1]>v2[i2]){
            v[i] = v2[i2];
            i = i + 1;
            i2 = i2 + 1;
        } else{
            v[i] = v1[i1];
            i = i + 1;
            i1 = i1 + 1;
        }
    } 
    // Copiar os elementos restantes para o vetor original
    while(i1<n1){
        v[i]= v1[i1];
        i++;
        i1++;
    }
    while(i2<n2){
        v[i]= v2[i2];
        i++;
        i2++;
    }

}

void merge_sort(int v[], int n) {
    //Caso base
    if (n <2){
        return;
    }
    //Dividir o vetor ao meio
    // calcular o tamanho de cada metade
    int n1 = n/2;
    int n2 = n - n1;
    int v1[n1];
    int v2[n2];
    //  copiar os elementos para primeira metade
    for (int i = 0; i<n1; i++){
        v1[i] = v[i];
    }
    //  copiar os elementos para segunda metade
    for (int i = n1; i < n; i++){
        v2[i - n1] = v[i];
    }
    //Ordenar a primeira metade
    merge_sort(v1,n1);
    //Ordenar a segunda metade
    merge_sort(v2,n2);
    //Mesclar as duas metades
    merge(v1, n1, v2, n2, v, n);

    mostrar(v, n);
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
    merge_sort(v, n);
    mostrar(v, n);
    return 0;
}
