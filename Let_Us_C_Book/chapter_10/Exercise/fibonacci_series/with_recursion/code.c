#include <stdio.h>
void fibonacci (int num, int a,int b,int next);
int main()
{
    int num,i,a = 0,b = 1,next;
    
    printf("Enter the number for which u need to find fibonacci: ");
    scanf("%d", &num);
    fibonacci (num,0,1,next);
    return 0;
}
void fibonacci (int num, int a,int b,int next)
{       
    int i;
    if(num <= 0)
    return;
    else
    {
      printf("%d\t",a);
      next = a + b;
      a = b;
      b = next;
   fibonacci (num - 1,a,b,next);
    }
}
