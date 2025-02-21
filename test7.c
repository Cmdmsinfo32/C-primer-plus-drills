// test 7 -- 第七题
#include<stdio.h>
int main(){
    float cup;
    float pint, ounce, spoon, teaspoon;

    printf("Please enter the number of cups u have:");
    scanf("%f", &cup);
    pint = cup / 2;
    ounce = cup * 8;
    spoon = ounce * 2;
    teaspoon = spoon * 3;
    printf("u have %.f pints,%.f ounces,%.f spoons and %.f teaspoons", pint, ounce, spoon, teaspoon);

    getchar();
    getchar();
    return 0;
}