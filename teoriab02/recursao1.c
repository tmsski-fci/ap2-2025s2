#include <stdio.h>

int calcular(int n) {
    printf("antes: %d\n", n);
    int x;
    if (n <= 0) x = 0;
    else x = calcular(n-1) + n;
    printf("depois: %d\n", x);
    return x;
}

int main() {
    int r = calcular(4);
    printf("r = %d\n", r);
    return 0;
}