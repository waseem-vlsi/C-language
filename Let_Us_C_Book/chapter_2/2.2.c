#include <stdio.h>
#include <math.h>
int main()
{
    int n,a,b,c,d,e;
    long int rev_num;
    printf("enter the number which you want to reverse(number should be <32767):");
    scanf("%d",&n);
    e = n%10;
    n = n/10;
    d = n%10;
    n = n/10;
    c = n%10;
    n = n/10;
    b = n%10;
    n = n/10;
    a = n%10;
    rev_num = e *pow(10,4) + d *pow(10,3) + c *pow(10,2) + b *pow(10,1) + a;
    printf("The reverse number is %ld",rev_num);
    return 0;
}
