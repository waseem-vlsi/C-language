#include <stdio.h>
#include <math.h>
int main()
{
    float x;
    float *y;
    float **z;
    y = &x;
    z = &y;
    printf("Enter the value of random number: ");
    scanf("%f", &x);
    printf("The vlaue of entered random number: %f\n", x);
    printf("Address of a entered random number: %x\n", &x);
    printf("Address of a entered random number: %f\n", **z);
    printf("Address of a x,y,z respectively: %x\t %x\t %x\t", &x,&y,&z);
    
    
    return 0;
    
}
