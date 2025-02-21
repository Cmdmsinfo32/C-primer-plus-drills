// test8 -- 第八题
#include<stdio.h>
int main(){
    double one, two;

    printf("Please enter two double numbers:");
    while(scanf("%lf %lf", &one, &two)==2){
        printf("The result is %.2f\n", (two - one) / (two * one));
        printf("Please enter two double numbers(q to quit):");
    }

    getchar();
    getchar();
    return 0;
}