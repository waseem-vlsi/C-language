// Using loops
#include <stdio.h>
int main()
{
    int num, sum = 0,i,num1;
    printf("Enter a five digit number : ");
    scanf("%d", &num);
    for(i = 0; i < 5; i++)
    {
        num1 = num %10;
        printf("num%d = %d\n", i,num1);
        num = num/10;
        sum = sum + num1;
        
    }
    printf("Sum of the digits : %d", sum);
    return 0;
}

