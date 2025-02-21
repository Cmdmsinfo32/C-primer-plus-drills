// test14 -- 第十四题
#include<stdio.h>
#define SIZE 8
int main(){
    double num[SIZE];
    double num_sum[SIZE];
    int index;
    double sum;

    printf("Please enter a set of numbers:");
    for (index = 0; index < SIZE; index++){
        scanf("%lf", &num[index]);
        printf("%.1f ", num[index]);
    }
    printf("\n");
    sum = 0;
    for (index = 0; index < SIZE; index++){
        sum += num[index];
        num_sum[index] = sum;
        printf("%.1f ", sum);
    }

    getchar();
    getchar();
    return 0;
}