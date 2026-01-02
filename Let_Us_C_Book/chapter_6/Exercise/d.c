#include <stdio.h>
#include <math.h>
int main()
{
    float i,x,y;
    float result = 0;
    printf("The value of x: ");
    scanf("%f", &x);
    for(i = 1; i <= 7; i++)
    {
       result =  0.5*pow((((x - 1)/x)/x),i+1);
       result = result + ((x-1))/x;
    }
    printf("The value of result: %f", result );
    return 0;
}
