#include <stdio.h>
#include <stlib.h>

int main()
{
    int kohli,rohit,sky,abhishek;
    printf("Projecting cricket score!!!");
    printf("Enter kohli score: ");
    scanf("%d", &kohli);
    printf("Enter rohit score: ");
    scanf("%d", &rohit);
    printf("Enter sky score: ");
    scanf("%d", &sky);
    printf("Enter abhishek score: ");
    scanf("%d", &abhishek);
    
    switch(kohli)
    {
        case 100:
        printf("Kohli scores centuary!!!");
        default: 
        printf("he didnt score 100");
    }
    switch(rohit)
    {
        case 100:
        printf("rohit scores centuary!!!");
        default: 
        printf("he didnt score 100");
    }
    switch(sky)
    {
        case 100:
        printf("sky scores centuary!!!");
        default: 
        printf("he didnt score 100");
    }
    switch(abhishek)
    {
        case 100:
        printf("abhishek scores centuary!!!");
        default: 
        printf("he didnt score 100");
    }
    return 0;
    
}
