#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,y;
    for(a = 1; a<= 30; a++)
    {
        for(b = 1; b<= 30; b++)
        {
            for(c = 1; c<= 30; c++)
            {
                y =  pow(c,2) - pow(a,2) - pow(b,2);
                if(y == 0)
                {
                    printf("%d\t%d\t%d\t\n", a,b,c);
                }
                
            }
        }
    }
    return 0;
}
