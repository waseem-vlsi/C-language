#include <stdio.h>
#include <math.h>
int func_pow(int,int);
int main()
{
    int a,b;
    float result;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    result = func_pow(a,b);
    printf("The value of result is : %f", result);
    return 0;
}

int func_pow(int a,int b)
{
    float y;
    y = pow(a,b);
    return y;
}
