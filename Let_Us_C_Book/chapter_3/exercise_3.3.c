#include <stdio.h>
#include <math.h>
int main()
{
    int num1,num2,result1,result2;
    printf("Enter a number1: ");
    scanf("%d", &num1);
    printf("Enter a number2: ");
    scanf("%d", &num2);
    
        result1 = pow(num1,num2);
        printf("num1 power num2 is : %d\n", result1);

    result2 = pow(num2,num1);
    printf("num2 power num1 is : %d", result2);
    return 0;
    
}
