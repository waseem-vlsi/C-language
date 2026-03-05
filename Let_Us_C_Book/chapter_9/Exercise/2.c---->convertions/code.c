#include <stdio.h>
void unit_conv(int*, float*, float*, float*);
int main()
{
    int weight_in_kg;
    float weight_in_grams;
    float weight_in_tons;
    float weight_in_pounds;
    
    printf("Enter the weight in kg: ");
    scanf("%d", &weight_in_kg );
    unit_conv(&weight_in_kg, &weight_in_grams, &weight_in_tons, &weight_in_pounds);
    printf("Weight in grams: %f\n",weight_in_grams);
    printf("Weight in tons: %f\n",weight_in_tons);
    printf("Weight in pounds: %f\n",weight_in_pounds);
    return 0;
}

void unit_conv(int* weight_in_kg, float *weight_in_grams, float *weight_in_tons, float *weight_in_pounds)
{
   *weight_in_grams = 1000*(*weight_in_kg);
   *weight_in_tons = 1000*(*weight_in_kg);
   *weight_in_pounds = 2.20462*(*weight_in_kg);
}
