#include <stdio.h>
int main()
{
    int i ;
    printf("Enter the value for which you need to verify: ");
    scanf("%d", &i);
    switch(i)
    {
        case  0:
        printf("Enter the value is correct!!!\n");
        break;
        case 2:
        printf("Enter the value is correct!!!\n");
        break;
        case 3:
        printf("Enter the value is correct!!!\n");
        break;
        case 5:
        printf("Enter the value is correct!!!\n");
        break;
        default:
        printf("There is no value correct which you entered!!!\n");
        }
}
