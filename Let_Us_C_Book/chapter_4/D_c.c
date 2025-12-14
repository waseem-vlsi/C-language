#include <stdio.h>
int main()
{
    float hardness, carbon,tensile_stength;
    printf("Enter a value of hardness of a steel: ");
    scanf("%f", &hardness);
    printf("Enter a value of carbon content of a steel: ");
    scanf("%f", &carbon);
    printf("Enter a value of tensile strenth of a steel: ");
    scanf("%f", &tensile_stength);
    if(hardness >50 && carbon >0.7 && tensile_stength > 5600)
    {
        printf("We have grade 10 IRON!!!");
    }
    else if(hardness >50 && carbon >0.7)
    {
       printf("We have grade 9 IRON!!!"); 
    }
     else if(carbon >0.7 && tensile_stength > 5600)
    {
       printf("We have grade 8 IRON!!!"); 
    }
     else if(hardness >50 && tensile_stength > 5600)
    {
       printf("We have grade 7 IRON!!!"); 
    }
     else if(hardness >50 || carbon >0.7 || tensile_stength > 5600)
    {
        printf("We have grade 6 IRON!!!");
    }
    else {
    printf("We have grade 5 IRON!!!");
    }
    return 0;
}
