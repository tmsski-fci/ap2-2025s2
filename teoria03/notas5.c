#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void mostrar(float v[], int n) {
    for ( int i = 0; i < n ; i++ ){
        printf ("%.2f ", v[i]);
    }
    printf ("\n");
}
float maior(float v[], int n) {
    float m = v[0];
    for ( int i = 1; i < n ; i++ ){
        if(v[i] > m){
            m = v[i];
        }
    }    
    return m;
}
float menor(float v[], int n) {
    float m = v[0];
    for ( int i = 1; i < n ; i++ ){
        if(v[i] < m){
            m = v[i];
        }
    }    
    return m;
}
float media(float v[], int n) {
    float s = 0;
    for ( int i = 0; i < n ; i++ ){
        s = s + v[i];
    }    
    return s/n;
}
int main(){
    srand(time(NULL));
    float notas[15];
    for (int i = 0; i < 15; i++){
        notas[i] = ((float)(rand()%101))/10; 
    }
    mostrar(notas, 15);
    printf("Maior valor: %.1f\n", maior(notas, 15));
    printf("Menor valor: %.1f\n", menor(notas, 15));
    printf("Media: %.1f\n", media(notas, 15));
    return 0;
}