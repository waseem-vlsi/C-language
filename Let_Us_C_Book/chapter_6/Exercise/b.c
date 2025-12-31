#include <stdio.h>
int main()
{
    int y;
    float x,i;
    printf("y\t\tx\t\t\t\ti\n");
    for(y = 1; y<=6; y++)
    {
        for(x = 5.5; x<= 12.5; x = x+0.5)
        {
              i = 2+ (y+0.5*x);
                  printf("%d\t\t%f\t\t%f\n",y,x,i);
              
        }
    }
    return 0;
}
