#include <stdio.h>
int main()
{
    int salary;
    float DA,HRA,GS;
    printf("enter ramesh salary: ");
    scanf("%d", &salary);
    DA = salary * 0.4; // DA = Dearness allowness
    HRA = salary * 0.2; // HRA = house rent 
    GS = salary + DA + HRA; // gross salary
    printf(" gross salary of ramesh is :%f ",GS );
    return 0;
}
