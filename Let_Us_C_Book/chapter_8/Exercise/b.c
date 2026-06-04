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


// method 2

#include <stdio.h>

int prime_fact(int);

int main()
{
    int num;
    printf("Enter a number for which u need to find prime factors: ");
    scanf("%d",&num);
    prime_fact(num);
    return 0;
}


int prime_fact(int num)
{
    for(int i = 2; i<=num; i++)
    {
       while(num %i == 0)
       {
           printf("%d\t", i);
           num = num/i;
       }
      
       
    }
    return 0;
}
