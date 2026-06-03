#include <stdio.h>

int main()
{
    int year;
    scanf("%d", &year);

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        printf("Leap Year");
    else
        printf("Not a Leap Year");

    return 0;
}


// another method

#include <stdio.h>
int leap_year(int);

int main()
{
    int year;
    printf("Enter a year for which u need to find either it is a leap year or not: ");
    scanf("%d", &year);
    
    leap_year(year);
    return 0;
}

int leap_year(int year)
{
    
    if(year%400 == 0)
    {
        printf("%d is a leap year", year);
    }
    else if((year%4 == 0) && (year%100 !=0) )
    {
        printf("%d is a leap year", year);
    }
    else 
    {
        printf("%d is not a leap year", year);
    }
    return 0;
 
}
