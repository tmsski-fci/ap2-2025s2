#include <stdio.h>

void p(int n) {
    if (n == 0) {
        return;
    }
    p(n-1);
    printf("%d\n", n);
}

int main() {
    int x = 4;
    p(x);
    return 0;
}