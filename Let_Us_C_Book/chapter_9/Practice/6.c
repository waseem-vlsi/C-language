#include <stdio.h>
int main() {
    int a = 10;
    int *p;
    p = &a;
    printf("Value of a = %d\n", a);
    printf("Address of a = %p\n", &a);
    printf("Pointer p stores address = %p\n", p);
    printf("Value at address stored in p = %d\n", *p);

    return 0;
}
