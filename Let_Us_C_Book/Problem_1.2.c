#include <stdio.h>
int main()
{
    int distance;
    float distance_in_meters, distance_in_centimeters, distance_in_feet, distance_in_inches;
    printf("enter the ditance between two cities in KM : ");
    scanf("%d", &distance);
    distance_in_meters = distance * 1000;
    distance_in_centimeters =distance_in_meters * 100;
    distance_in_inches =distance_in_centimeters * 0.393701; 
    distance_in_feet =distance_in_centimeters * 0.0328084;
    printf("distance in meters: %f\n distance in centimeters: %f\n distance in feet: %f\n distance in inches: %f\n ", distance_in_meters, distance_in_centimeters, distance_in_inches, distance_in_feet );
    return 0;
}
