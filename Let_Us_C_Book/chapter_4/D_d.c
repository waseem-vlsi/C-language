#include <stdio.h>
#include <math.h>
int main()
{
    int weight,height;
    float BMI;
    printf("Enter the weight in Kg's : ");
    scanf("%d", &weight);
    printf("Enter the Height in cms : ");
    scanf("%d", &height);
    BMI = weight / (sqrt(height));
    printf("BMI = %f\n", BMI);
    if(BMI = 15)
    {
        printf("Person is under the categeory of Starvation!!!");
    }
    else if(1.51 <= BMI <= 17.5)
    {
        printf("Person is under the categeory of Aoretic!!!");
    }
    else if(18.6 <= BMI <= 24.9)
    {
        printf("Person is under the categeory of underweight!!!");
    }
    else if(25 <= BMI <= 25.9)
    {
        printf("Person is under the categeory of Overweight!!!");
    }
    else if(30 <= BMI <= 30.9)
    {
        printf("Person is under the categeory of Obese!!!");
    }
    else 
    {
        printf("Person is under the categeory of Morbility Obese!!!");
    }
    return 0;
}
