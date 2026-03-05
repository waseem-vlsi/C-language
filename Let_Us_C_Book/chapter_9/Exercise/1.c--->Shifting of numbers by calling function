#include <stdio.h>
void shift(int*, int*, int*);

int main()
{
    int x,y,z;
    printf("Enter the values of variables !!!\n");
    
    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of y: ");
    scanf("%d", &y);

    printf("Enter the value of z: ");
    scanf("%d", &z);
    
    shift(&x, &y, &z);
    printf("The values of x,y,z after shifting are \nx = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d", z);
    return 0;
}

void shift(int *x, int *y, int *z)
{
    int temp;
    
    temp = *x;
    *x = *y;
    *y = *z;
    *z = temp;
}
