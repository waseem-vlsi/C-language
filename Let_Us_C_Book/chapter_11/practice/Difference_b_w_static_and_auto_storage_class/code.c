#include <stdio.h>
void increment();
int main()
{

    increment();
    increment();
    increment();
    increment();
    increment();
    increment();
    increment();
    increment();
    return 0;
}

void increment()
{
    auto int i = 10;
    static int j = 15;
    i = i + 2;
    j = j + 5;
    printf("%d %d\n", i,j);
}
