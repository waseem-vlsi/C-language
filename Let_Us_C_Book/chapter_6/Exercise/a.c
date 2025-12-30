#include <stdio.h>
#include <math.h>
int main()
{
    int num,i,Y;
    printf("enter a number for which you need to fing multiplication table : ");
    scanf("%d",&num);
    for(i = 1; i<= 10; i++)
    {
        Y = num*i;
        printf("%d * %d =%d\n ", num,i,Y);
    }
    return 0;
}
