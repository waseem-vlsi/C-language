#include<stdio.h> 
int main()
{
 float temp_in_c,temp_in_f;
 printf("Enter the temperature in Fahrenheit\n");
 scanf("%f",&temp_in_f);
 printf("Temperature in Celsius = %f.",(temp_in_f-32)/1.8);
 return 0;
}
