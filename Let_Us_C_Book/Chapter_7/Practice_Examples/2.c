#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,marks;
    printf("Enter the marks of student: ");
    scanf("%d", &marks);
    if(marks >= 90)
    {
        goto out;
    }
    else 
    {
        printf("You got less marks!!!\n");
        exit(1);
    }
    out: printf("you got very good marks!!!\n");
}
