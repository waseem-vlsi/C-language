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


// another method

#include <stdio.h>

int main()
{
    int num;
    printf("Enter the random number : ");
    scanf("%0d", &num);
    
    printf("Value of random number which we entered above : %0d\n", num);
    printf("address of entered random number : %0ud", &num);
    
    return 0;
}
