#include <stdio.h>
int main()
{
    int salary,HRA,DA,total_salary;
    printf("Enter the salary of a employee: ");
    scanf("%d", &salary);
    if(salary < 1000)
    {
        HRA = 0.1*salary;
        DA = 0.9*salary;
        total_salary = salary + DA + HRA;
        printf("Total salary of a employee: %d", total_salary);
    }
    else if (salary >= 1500)
    {
        HRA = 500;
        DA = 0.98*salary;
        total_salary = salary + DA + HRA;
        printf("Total salary of a employee: %d", total_salary);
    }
    else 
    printf("salary of a employ is in between 1000 & 1500");

return 0;
}
