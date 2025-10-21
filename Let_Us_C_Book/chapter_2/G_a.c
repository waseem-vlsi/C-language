#include <stdio.h>
int main()
{
    int num,result,a,b,c,d,e;
    printf("enter five digit positive number: ");
    scanf("%d",&num);
a = num % 10;
num = num/10;
b = num % 10;
num = num/10;
c = num % 10;
num = num/10;
d = num % 10;
num = num/10;
e = num;
result = a+b+c+d+e;
printf("sum of 5 digits of entered number: %d",result);
return 0;

}
