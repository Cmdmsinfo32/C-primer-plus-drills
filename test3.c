// test 1 -- 第一题
#include<stdio.h>
double min_(double, double);

int main(){
    double a;
    double b;
    double res;
    scanf("%lf %lf", &a, &b);
    res = min_(a, b);
    printf("%.2f\n", res);

    getchar();
    getchar();
    return 0;
}

double min_(double x,double y){
    return (x > y) ? y : x;
}