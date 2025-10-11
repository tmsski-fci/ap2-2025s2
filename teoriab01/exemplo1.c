#include <stdio.h>

void trocar(int a, int b) {
    a = 1000;
    b = 5;
}

int main() {
    int a = 5;
    int b = 1000;
    trocar(a, b);
    printf("a = %d; b = %d\n", a, b);
    return 0;
}