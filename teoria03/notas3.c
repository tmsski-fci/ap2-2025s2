#include <stdio.h>

void mostrar(float v[], int n) {
    for ( int i = 0; i < n ; i++ ){
        printf ("%f ", v[i]);
    }
    printf ("\n");
}
int main(){
    float notas[15];
    float valor = 9.9;
    for (int i = 0; i < 15; i++){
        notas[i] = valor;
        valor = valor - 0.1; 
    }
    mostrar(notas, 15);
    return 0;
}