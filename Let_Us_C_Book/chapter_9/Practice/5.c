#include <stdio.h>

int main() {
    int a = 10;
    int *p = &a;
    int **q = &p;

    printf("Value of a: %d\n", a);
    printf("Using *p: %d\n", *p);
    printf("Using **q: %d\n", **q);

    return 0;
}
