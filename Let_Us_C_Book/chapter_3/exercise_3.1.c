#include <stdio.h>
int main()
{
    int num,OT,i,amount_of_OT;
    printf("enter the number of employees: ");
    scanf("%d",&num);
    for(num = 1; num<11 ; num++)
    {
        printf("enter the OT for employee %d = ", num);
        scanf("%d", &OT);
        if(OT >10)
        {
            amount_of_OT = OT*12; 
            printf("employee amount for OT is %d\n",amount_of_OT );
        }
        else 
        printf("employee is not elgible for OT amount!!! \n");
    }
    
    return 0;
}
