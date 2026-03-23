#include <stdio.h>
 int y;
 void increment();
 void decrement();

int main()
{
    printf("y = %d\n",y);
    
     increment();
     increment();
     increment();
     increment();
     printf("\n");
    decrement();
    decrement();
    decrement();
    decrement();
    return 0;
}

void increment()
{
    y = y + 1;
    printf(" %d\t", y);
}

void decrement()
{
    y = y - 1;
    printf("%d\t", y);
}
