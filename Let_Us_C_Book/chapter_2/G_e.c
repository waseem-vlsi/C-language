#include<stdio.h>
#include<math.h>
int main()
{
    int X;
    float a,b,c,d,e,f;
    printf("enter the angle in degree: ");
    scanf("%d",&X);
       float rad = X * (M_PI / 180.0);
    a = sin(rad);
    b = cos(rad);
    c = tan(rad);
    d = 1/a;;
    e = 1/b;
    f = 1/c;
    printf("The value of sine: %f\n",a);
    printf("The value of cosine: %f\n",b);
    printf("The value of tan: %f\n",c);
    printf("The value of cot: %f\n",d);
    printf("The value of sec: %f\n",e);
    printf("The value of cosec: %f\n",f);
    return 0;
}
