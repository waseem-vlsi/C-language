#include <stdio.h>

int add(int x, int y)   
{
    return x + y;
}

int main()
{
    int result;

    result = add(5, 3);  

    printf("Sum = %d", result);

    return 0;
}
