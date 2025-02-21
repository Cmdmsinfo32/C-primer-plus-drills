// test 9 -- 第八题
#include<stdio.h>
#include<math.h>
double calc(double, int);

int main(){
    double base;
    int power;
    scanf("%lf%d", &base, &power);
    calc(base, power);

    getchar();
    getchar();
    return 0;
}

double calc(double base, int power){
    if (!base && !power)
        printf("0's power 0 is not defined, result is %d", 1);
    else if (!base && power)
        printf("%d", 0);
    else if (base && !power)
        printf("%d", 1);
    else{
        double res = 1;
        for (int i = 1; i <= abs(power); i++){
            res *= 1. / base;
        }
        printf("%f", res);
    }
}