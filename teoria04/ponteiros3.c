#include <stdio.h>

void tentar_mudar(int x) {
    x = 20;
    printf("x = %d\n", x);
}

void mudar(int *x) {
    *x = 20;
    printf("*x = %d\n", *x);
}

int main(){
    int a;
    a = 10;
    printf("a = %d\n", a);
    tentar_mudar(a);
    printf("a = %d\n", a);
    mudar(&a);
    printf("a = %d\n", a);
    return 0;
}
