#include <stdio.h>

int main(){

    int a;
    a = 10;
    int b;
    b = 15;
    //int *c = &a;
    int *c;
    c = &a;
    printf("c: %p\n",c);
    printf("a: %d, b: %d, *c: %d\n", a, b, *c);
    b = a;
    *c = 5;
    printf("a: %d, b: %d, *c: %d\n", a, b, *c);
    c = &b;
    b = 20;
    printf("a: %d, b: %d, *c: %d\n", a, b, *c);
    return 0;
}
