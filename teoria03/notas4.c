#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void mostrar(float v[], int n) {
    for ( int i = 0; i < n ; i++ ){
        printf ("%.2f ", v[i]);
    }
    printf ("\n");
}
int main(){
    srand(time(NULL));
    float notas[15];
    for (int i = 0; i < 15; i++){
        notas[i] = ((float)(rand()%101))/10; 
    }
    mostrar(notas, 15);
    return 0;
}