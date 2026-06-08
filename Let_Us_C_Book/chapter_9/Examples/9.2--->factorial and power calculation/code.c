#include <stdio.h>
#include <math.h>

void fact_power(int *, int* , int*, int *, int *);

int main()
{
    
    int num, fact = 1, power, num2,num3;
    printf("The number for which u need to find factorial and power of a number : : ");
    scanf("%0d", &num);
    printf("Enter 2 numbers for which u need to find powers:  ");
    scanf("%0d  ", &num2);
    scanf("%0d", &num3);
    fact_power(&num, &num2, &num3, &fact, &power);
    printf("The factorial of a number : %0d\n", fact);
    printf("The power of a given number : %0d", power);
    
    return 0;
}

void fact_power(int *num, int *num2, int *num3, int *fact, int *power)
{
    for(int i = 1; i <= *num; i++)
    {
        *fact = *fact * i;
    }
    *power = pow(*num2, *num3);
    
}
