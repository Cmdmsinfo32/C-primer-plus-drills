// test 3 -- 第三题
#include<stdio.h>
int main(){
    float obj;

    printf("Enter a floating-point value:");
    scanf("%f", &obj);
    printf("fix-point notation: %f\n", obj);
    printf("exponential notation: %e\n", obj);
    printf("p notation: %a\n", obj);

    getchar();
    getchar();
    return 0;
}