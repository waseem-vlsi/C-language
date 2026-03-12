#include <stdio.h>
int sum_of_digits(int num);

int main()
{
    int num, sum;
    printf("Enter the 5 digit integer number for which u want to find sum of digits: ");
    scanf("%d", &num);
    sum = sum_of_digits(num);
    printf("sum of digits : %d", sum);
    return 0;
}

int sum_of_digits(int num)
{
    if(num == 0)
    {
        return(0);
    }
    else 
    return((num % 10) + sum_of_digits(num/10) );
    
}
