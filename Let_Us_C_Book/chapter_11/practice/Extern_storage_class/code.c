#include <stdio.h>

extern int y;
int y = 27;

int main()
{
    extern int x;
    printf("x = %d\t y = %d", x ,y);
    return 0;
}

int x = 46;
