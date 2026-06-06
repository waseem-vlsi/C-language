#include <stdio.h>

void swap(int * , int *);

int main()
{
    int x,y;
    printf("The value of x :" );
    scanf("%0d", &x);
    printf("The value of y: ");
    scanf("%0d", &y);
    
    swap(&x,&y);
    
    printf("values after swap!!!\n");
    printf("x : %0d and y : %0d", x,y);
    return 0;
}

void swap(int *x, int *y)
{
    int temp;
    temp = *y;
    *y = *x;
    *x = temp;
 
}
