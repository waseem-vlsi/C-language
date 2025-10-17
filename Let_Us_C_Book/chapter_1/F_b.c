#include <math.h>
#include <stdio.h>
int main()
{
    int a,b,r,permimeter_of_a_rectangle,area_of_a_rectangle;
    float area_of_a_circle;
    printf("Enter length of rectangle : \n"); 
    scanf("%d", &a);
     printf(" enter the width of rectangle:\n");
    scanf("%d", &b);
     printf("enter the radius of circle:\n");
    scanf("%d", &r);
    permimeter_of_a_rectangle = 2*(a+b);
    area_of_a_rectangle = 2*a*b;
    area_of_a_circle = M_PI*pow(r,2);
    printf("Enter the perimeter of a rectangle: %d\n Enter the area of a rectangle = %d\n Enter the area of a circle = %f\n",  permimeter_of_a_rectangle,area_of_a_rectangle,area_of_a_circle);
    return 0;
    
}
