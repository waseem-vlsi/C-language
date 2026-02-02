#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter a choice: ");
    scanf("%d", &num);
    switch(num)
    {
        case 0:
        printf("You entered a wrong choice!!!");
        break;
        case 25:
        printf("You are border pass!!!");
        break;
        case 75: 
        printf("Your marks are good!!!");
        break;
        case 100:
        printf("You are topppp!!!!!");
        break;
        default:
        printf("You are fail");
        break;
    }
    return 0;
}
