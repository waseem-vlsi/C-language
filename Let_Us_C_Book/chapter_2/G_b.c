#include <math.h>
#include <stdio.h>
int main()
{
    float X,Y,r,phi;
    printf("enter the cartesian coordinates: ");
    scanf("%f %f",&X,&Y);
    r = sqrt(pow(X,2) + pow(Y,2));
    phi =  atan(Y/X);
    printf("polar coordinates of given cartesian coordinates(phi is in radians) :(%f,%f)",r,phi);
    return 0;
}
