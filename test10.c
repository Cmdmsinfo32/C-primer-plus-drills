// test 10 -- 第九题
#include<stdio.h>
#include<math.h>
double calc(int);
double base;

int main(){
    int power;
    scanf("%lf%d", &base, &power);
    if (!base && !power)
        printf("0's power 0 is not defined, result is %d", 1);
    else if (!base && power)
        printf("%d", 0);
    else if (base && !power)
        printf("%d", 1);
    else
        printf("%f", calc(abs(power)));

    getchar();
    getchar();
    return 0;
}

double calc(int power){
    if (power == 0)
        return 1;
    else
        return calc(power - 1) * (1. / base);
}