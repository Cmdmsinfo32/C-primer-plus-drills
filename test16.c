// test16 -- 第十六题
#include<stdio.h>
int main(){
    double ins = 110;
    double slo = 105;
    int year = 1;

    while(slo < ins){
        slo = slo + 10;
        ins += ins * 0.05;
        year++;
    }
    printf("After %d years, instant income is %.2f, while slow income is %.2f", year, ins, slo);

    getchar();
    return 0;
}