#include <stdio.h>

int main()
{
    int n1,n2;

    printf("Enter 2 numbers : ");
    scanf("%0d %0d", &n1,&n2);

    n1 = n1 + n2;
    n2 = n1 - n2;
    n1 = n1 - n2;

    printf("%0d %0d", n1,n2);

    return 0;
}
