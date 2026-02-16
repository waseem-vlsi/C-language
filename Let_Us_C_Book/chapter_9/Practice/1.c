#include <stdio.h>

int main()
{
    int i;
    printf("The size of int variable is %d bytes\n", sizeof(int));
    printf("Enter the value of i: ");
    scanf("%d", &i);
    printf("The value of i: %d\n", i);
    printf("The address of i in hexadecimal: %p\n", &i);
     printf("The address of i in binary: %b\n", &i);
      printf("The address of i decimal: %d\n", &i);
       printf("The address of i in octal: %o\n", &i);
    return 0;
}
