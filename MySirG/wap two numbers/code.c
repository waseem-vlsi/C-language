#include <stdio.h>
int main()
{
    int n1,n2;
    int temp = 0;

    printf("Enter 2 numbers : ");
    scanf("%0d %0d", &n1, &n2);
    printf("Numbers before swap!!!\n");
    printf("%0d\t %0d\n", n1,n2);

     temp = n1;
    n1 = n2;
    n2 = temp;
    

    printf("Numbers after swap!!!\n");
    printf("%0d\t %0d\n", n1,n2);
    return 0;
}
