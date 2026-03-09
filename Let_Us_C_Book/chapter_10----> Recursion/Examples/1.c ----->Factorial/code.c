#include <stdio.h>
#include <math.h>
int fact(int x);
int main()
{
    int x,p;
    printf("Enter the value of x for which you need to find factorial : ");
    scanf("%d", &x);
    p = fact(x);
    printf("The factorial of a given number: %d", p);
    return 0;
}
int fact(int x)
{
    int f;
    if(x == 1)
      return(1);
      else
      f = x*fact(x - 1);
      return(f);
}
