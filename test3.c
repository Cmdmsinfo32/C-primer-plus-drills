// test 3 -- 第三题
#include<stdio.h>
int main(){
    float a;

    printf("Please enter a float number:");
    scanf("%f", &a);
    printf("The input is %+.3f or %.3E.", a, a);

    getchar();
    getchar();
    return 0;
}