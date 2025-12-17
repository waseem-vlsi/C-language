#include <stdio.h>
#include <math.h>
int main()
{
    int num,i,factorial ;
    printf("Enter a number for which you need to find factorial: ");
    scanf("%d", &num);
    factorial = 1;
    for(i = 1 ; i <= num ; i = i + 1)
    {
        factorial = factorial * i;
        
    }
    printf("factorial of a given number : %d", factorial);
    return 0;
}
