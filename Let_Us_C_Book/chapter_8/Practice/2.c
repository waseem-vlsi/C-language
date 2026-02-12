#include <stdio.h>

// function declarations
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
float divi(int a, int b);

int main()
{
    int x, y, choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("\n1.Add  2.Sub  3.Mul  4.Div\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1: printf("Sum = %d", add(x,y)); break;
        case 2: printf("Sub = %d", sub(x,y)); break;
        case 3: printf("Mul = %d", mul(x,y)); break;
        case 4: printf("Div = %.2f", divi(x,y)); break;
        default: printf("Invalid choice");
    }

    return 0;
}

// function definitions
int add(int a, int b) { return a+b; }
int sub(int a, int b) { return a-b; }
int mul(int a, int b) { return a*b; }
float divi(int a, int b) { return (float)a/b; }
