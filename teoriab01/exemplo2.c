#include <stdio.h>

void trocar(int v[2]) {
    v[0] = 1000;
    v[1] = 5;
}

int main() {
    int v[2];
    v[0] = 5;
    v[1] = 1000;
    trocar(v);
    printf("v[0] = %d; v[1] = %d\n", v[0], v[1]);
    return 0;
}