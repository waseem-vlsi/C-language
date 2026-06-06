#include <stdio.h>

int main()
{
    int i,*j;
    
    printf("Enter the number for which u need find a address: ");
    scanf("%d",&i);
    j = &i;
    printf("The value of i = %d\n", i);
    printf("value of address = %u\n", &i);
    printf("The value at address of i = %d\n", *(&i));
    printf("The value at address i = %d\n", *j);
    return 0;
    
}
