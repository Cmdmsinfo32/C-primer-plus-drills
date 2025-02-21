// test3 -- 第三题
#include<stdio.h>
#define STOP 0
int main(){
    int every;
    int odd_cnt;
    int even_cnt;
    int odd_sum;
    int even_sum;
    double odd_average;
    double even_average;

    odd_cnt = even_cnt = 0;
    odd_sum = even_sum = 0;
    printf("Please enter a train of numbers:");
    while(scanf("%d",&every) && every != STOP){
        if(every % 2){
            odd_sum += every;
            odd_cnt++;
        }
        else{
            even_sum += every;
            even_cnt++;
        }
    }
    odd_average = (double)odd_sum / odd_cnt;
    even_average = (double)even_sum / even_cnt;
    printf("The input has finished.U have %d odd numbers and %d even numbers and its average are %.2f and %.2f\n", odd_cnt, even_cnt, odd_average, even_average);

    getchar();
    getchar();
    return 0;
}
