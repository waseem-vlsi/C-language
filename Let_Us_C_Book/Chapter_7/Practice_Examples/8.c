#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number (1–3): ");
    scanf("%d", &n);

    switch(n)
    {
        case 1:
            printf("You entered ONE");
            break;

        case 2:
            printf("You entered TWO");
            break;

        case 3:
            printf("You entered THREE");
            break;

        default:
            printf("Invalid number");
    }

    return 0;
}
