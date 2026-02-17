#include <stdio.h>
int main()
{
    int i,*j,**(k);
   
    printf("Enter the value of i: ");
    scanf("%d", &i);
     j = &i;
     k= &j;
    printf("value of i: %d\n", *j);
    printf("address of i: %p\n", j);
    printf("value of i : %d\n", *(&i));
    printf("value of i :%d", **(&j));
    return 0;
    
}
