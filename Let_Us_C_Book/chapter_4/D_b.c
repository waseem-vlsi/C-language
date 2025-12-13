#include <stdio.h>
#include <math.h>
int main()
{
    float red,green,blue;
    float white,cyan,magenta,yellow,black,x,y,z;
    printf("Enter red color interger scale: ");
    scanf("%f", &red);
    printf("Enter green color interger scale: ");
    scanf("%f", &green);
    printf("Enter blue color interger scale: ");
    scanf("%f", &blue);
    x = red / 255;
    y = green / 255;
    z = blue / 255;
    if(x >= y && x >= z)
    {
        white = x;
        printf("white = %f\n", white);
    }
    else if (y >= x && y >= z)
    {
        white = y;
        printf("white = %f\n", white);
    }
    else
    {
    white = z;
    printf("white = %f\n", white);
    }
    cyan = (white - (red/255))/white;
    magenta = (white - (green/255))/white;
    yellow = (white - (blue/255))/white;
    black = 1 - white;
    printf("The value of cyan = %f\n", cyan);
    printf("The value of magenta = %f\n", magenta);
    printf("The value of yellow = %f\n", yellow);
    printf("The value of black = %f\n", black);
    return 0;
}
