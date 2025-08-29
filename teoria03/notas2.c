#include <stdio.h>

int main(){
    float notas[15];
    float valor = 9.9;
    for (int i = 0; i < 15; i++){
        notas[i] = valor;
        valor = valor - 0.1; 
    }

    for ( int i = 14; i > -1 ; i-- ){
        printf ("%f ", notas[i]);
    }
    printf ("\n");
    return 0;
}