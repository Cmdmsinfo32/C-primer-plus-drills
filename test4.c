// test4 -- 第四题
#include<stdio.h>
#define FEET_TO_INCH 12
int main(){
    const double CM_TO_INCH = 1 / 2.54;
    double cm;
    double inch;
    int feet;
    double left;

    printf("Enter a height in centimeters:");
    scanf("%lf", &cm);
    while(cm>0){
        inch = cm * CM_TO_INCH;
        feet = (int)inch / FEET_TO_INCH;
        left = inch - feet * FEET_TO_INCH;
        printf("%.1f cm = %d feet, %.1f inches\n", cm, feet, left);
        printf("Enter a height in centimeters(<=0 to quit):");
        scanf("%lf", &cm);
    }
    printf("Bye!\n");

    getchar();
    getchar();
    return 0;
}