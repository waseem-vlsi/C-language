#include <stdio.h>
int main()
{
    int x,y,A0,A1,A2,A3,A4,A5,A6,A7,A8,i;
    printf("enter the dimensions X & Y : ");
    scanf("%d %d",&x,&y);
    printf("A0 = %d X %d\n", x,y);
    for(i = 1; i<9;i++)
    {
        if(x > y)
        {
            x = (x/2) ;
            y = y;
            if(x > y)
            {
            printf("A%d = %d X %d\n", i,x,y );  
            }
            else 
            {
             printf("A%d = %d X %d\n", i,y,x );     
            }
        }
        else 
        {
        x = x;
        y = y/2;
          if(x > y)
            {
            printf("A%d = %d X %d\n", i,x,y );  
            }
            else 
            {
             printf("A%d = %d X %d\n", i,y,x );     
            }
        }
    }
    return 0;
}
