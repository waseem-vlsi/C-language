#include <stdio.h>

int main()
{
    int choice;
    int a = 10, b = 5;

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Sum = %d", a + b);
            break;

        case 2:
            printf("Difference = %d", a - b);
            break;

        case 3:
            printf("Product = %d", a * b);
            break;

        case 4:
            printf("Quotient = %d", a / b);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
