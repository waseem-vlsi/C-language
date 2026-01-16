#include <stdio.h>

void primeFactors(int n)
{
    int i;
    for(i = 2; i <= n; i++)
    {
        while(n % i == 0)
        {
            printf("%d ", i);
            n = n / i;
        }
    }
}

int main()
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("Prime factors are: ");
    primeFactors(num);

    return 0;
}
