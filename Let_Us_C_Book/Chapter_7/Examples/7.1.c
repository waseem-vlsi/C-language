#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice, a, fact, num, prime;
    int i, flag;

    printf("1. Factorial\n");
    printf("2. Prime Number\n");
    printf("3. Odd or Even\n");
    printf("4. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter a number: ");
            scanf("%d", &a);

            fact = 1;
            for(i = 1; i <= a; i++)
                fact = fact * i;

            printf("Factorial = %d\n", fact);
            break;

        case 2:
            printf("Enter a number: ");
            scanf("%d", &prime);

            flag = 1;
            if (prime <= 1)
                flag = 0;
            else {
                for(i = 2; i * i <= prime; i++) {
                    if(prime % i == 0) {
                        flag = 0;
                        break;
                    }
                }
            }

            if(flag)
                printf("Prime Number\n");
            else
                printf("Not a Prime Number\n");
            break;

        case 3:
            printf("Enter a number: ");
            scanf("%d", &num);

            if(num % 2 == 0)
                printf("Even Number\n");
            else
                printf("Odd Number\n");
            break;

        case 4:
            exit(0);

        default:
            printf("Wrong choice\n");
    }

    return 0;
}
