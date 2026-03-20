#include <stdio.h>
int main()
{
    int i = 27, j = 46;
    auto int k = 46, l = 27;

    printf("%d %d\n", i, j);
    printf("%d %d", k, l);
    return 0;
}
