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


// ANOTHER METHOD

#include <stdio.h>
#include <math.h>
float func_pow(float,float);
int main()
{
    float a,b;
    float result;
    printf("Enter the value of a: ");
    scanf("%f", &a);
    printf("Enter the value of b: ");
    scanf("%f", &b);
    result = func_pow(a,b);
    printf("The value of result is : %f", result);
    return 0;
}

float func_pow(float a,float b)
{
    float y;
    y = pow(a,b);
    return y;
}
