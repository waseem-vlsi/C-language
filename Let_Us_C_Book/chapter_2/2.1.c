#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,area,x;
 printf("enter the 3 sides of a triangle:");
    scanf("%f %f %f",&a,&b,&c);
    x = (a+b+c)/2;
    area = sqrt(x*(x-a)*(x-b)*(x-c));
    printf("area of triangle is %f",area);
    return 0;
}
