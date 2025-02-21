#include<stdio.h>
#define GALLON_TO_LITER 3.785
#define MILE_TO_METER 1.609
int main(){
    float miles;
    float gallons;

    printf("Please enter the mileage traveled in mile and the amount of gas consumed in gallon:");
    scanf("%f%f", &miles, &gallons);

    float liters_per_100kilometers = (100 * GALLON_TO_LITER * gallons) / (MILE_TO_METER * miles);
    printf("u consumed %f liters per one hundred kilometers.\n\n", liters_per_100kilometers);

    float AmeStd = miles / gallons;
    float EupStd = liters_per_100kilometers;
    printf("AmeStd is %.2f while EupStd is %.2f.\n\n", AmeStd, EupStd);

    getchar();
    getchar();
    return 0;
}