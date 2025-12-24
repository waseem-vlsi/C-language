// Non recursive
#include <stdio.h>
int main()
{
    int num,num1,num2,num3,num4,num5,sum;
    printf("Enter a 5 digit number: ");
    scanf("%d", &num);
    num1 = num % 10;
    num = num/10;
    num2 = num%10;
    num = num/10;
    num3 = num %10;
    num = num/10;
    num4 = num %10;
    num = num/10;
    num5 = num;
    sum = num1 + num2 + num3 + num4 + num5;
    printf("The sum of digits : %d", sum);
    return 0;
    
}


