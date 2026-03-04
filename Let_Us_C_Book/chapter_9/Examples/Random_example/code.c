#include <stdio.h>
int main()
{
    int x,y,z;
    printf("Enter the values of x,y,z are : ");
    scanf("%d %d %d", &x,&y,&z);
    printf("x = %d\n",x);
    printf("y = %d\n",y);
    printf("z = %d\n",z);
    printf("%x %x %x\n" ,  &x,&y,&z );
    printf("%d %d %d" ,  *&x,*&y,*&z );
    return 0;
}
