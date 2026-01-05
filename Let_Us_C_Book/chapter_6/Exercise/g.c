#include <stdio.h>
#include <math.h>
int main()
{
    int i,j,num;
    for(i=1; i<=12;i++)
    {
        for(j=1;j<=12;j++)
        {
            num = pow(i,3) + pow(j,3);
            if(num == 1729)
            {
                printf("\t%d\t%d\n",i,j);
            }
        }
    }
    return 0;
}
