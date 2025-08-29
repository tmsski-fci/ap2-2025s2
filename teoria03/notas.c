#include <stdio.h>

int main(){
    float notas[15];
    notas[0] = 9.9;
    notas[1] = 9.8;
    notas[2] = 9.7;
    notas[3] = 9.6;
    notas[4] = 9.5;
    notas[5] = 9.4;
    notas[6] = 9.3;
    notas[7] = 9.2;
    notas[8] = 9.1;
    notas[9] = 9.0;
    notas[10] = 8.9;
    notas[11] = 8.8;
    notas[12] = 8.7;
    notas[13] = 8.6;
    notas[14] = 8.5;

    for ( int i = 0; i < 15 ; i++ ){
        printf ("%f ", notas[i]);
    }
    printf ("\n");
    return 0;
}