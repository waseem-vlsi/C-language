#include <stdio.h>
void swapv(int *x, int *y);
int main()
{
    
    int a = 10, b = 20;
    printf("Values before swap are !!!\n");
    printf("a = %d\t\t b = %d\n", a ,b);
    swapv (&a, &b);
    printf("Values after swap are !!!\n");
    printf("a = %d\t\t b = %d\n", a,b);
    return 0;
}
void swapv(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}
