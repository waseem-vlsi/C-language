#include <stdio.h>
int main()
{
    int year,X;
    printf("enter a year which need to determine it is a leap year or not: ");
    scanf("%d", &year);
    if( year % 100 == 0)
    {
        if (year % 400 == 0)
        printf("entered year is a leap  year");
        else 
        printf("entered year is not a leap year");
    }
    else if(year % 4 == 0)
    printf("entered year is a leap year");
    else 
    printf("entered year is  not a leap year");
    return 0;
}
