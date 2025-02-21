// test17 -- 第十七题
#include<stdio.h>
#define RATE 0.08
int main(){
    double amount;
    int year;
    double sum_rate;

    year = 0;
    sum_rate = 0;
    amount = 100;
    while(amount > 0){
        sum_rate += amount * RATE;
        amount += amount * RATE;
        amount -= 10;
        year++;
    }
    printf("After %d years, u withdraw $%.2f back with interest.", year, sum_rate);

    getchar();
    return 0;
}