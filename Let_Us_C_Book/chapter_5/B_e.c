#include <stdio.h>
#include <math.h>
int main()
{
    int i,j,num, num1,num2,num3,num4;
    printf("ArmStrong numbers in between 1 & 500 are!!!\n");
    for (i = 1; i <= 500; i++)
    {
        num1 = i % 10;
        num2 = i / 10;
        num3 = num2 %10;
        num4 = num2/10;
        num = pow(num1,3) + pow(num3,3) + pow(num4,3);
        if(num == i)
        {
               printf("%d\n", num);
        }

    }
    
    return 0;
