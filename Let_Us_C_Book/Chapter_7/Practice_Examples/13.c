#include <stdio.h>

int main()
{
    int choice;

    printf("1. Tea\n2. Coffee\n3. Juice\nEnter choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Tea selected");
            break;

        case 2:
            printf("Coffee selected");
            break;

        case 3:
            printf("Juice selected");
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
