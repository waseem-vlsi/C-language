#include <stdio.h>
#include <stdlib.h>
int main()
{
     int a;
    printf("Enter your choice: ");
    scanf("%d", &a);
    switch(a)
    {
        case 0:
        printf("The art of C\n");
        break;
        case 1:
         printf("The spirit of C\n");
         break;
        case 2:
         printf("See through C\n");
         break;
         default:
         printf("Entered choice was wrong!!!");
         break;
    }
    return 0;
}
