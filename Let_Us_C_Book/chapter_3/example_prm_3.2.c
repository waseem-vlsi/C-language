#include <stdio.h>
int main()
{
    int num,X;
    printf("Enter a number : ");
    scanf("%d", &num);
    X = num % 2;
    if(X == 0)
    printf("entered number is a even number!!!");
    else 
    printf("Entered number is a odd number!!!");
    return 0;
}
