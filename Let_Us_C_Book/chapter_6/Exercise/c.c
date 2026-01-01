#include <stdio.h>
#include <math.h>
int main()
{
    int p,r,n,q,i;
    float a;
    for(i = 1; i<= 10; i++)
    {
        printf("Enter the value of q: ");
        scanf("%d", &q);
        printf("Enter the value of r: ");
        scanf("%d", &r);
        printf("Enter the value of n: ");
        scanf("%d", &n);
        printf("Enter the value of p: ");
        scanf("%d", &p);
     a = p * pow((1 + (float)r/q), (n*q));
        printf("\t\tThe value of result: %f\n", a);
    }
    return 0;
}
