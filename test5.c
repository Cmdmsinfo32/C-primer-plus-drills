// test 3 -- 第三题
#include<stdio.h>
double Reconcile_avg(double, double);

int main(){
    double a, b;
    double res;
    scanf("%lf%lf", &a, &b);
    res = Reconcile_avg(a, b);
    printf("%.2f", res);

    getchar();
    getchar();
    return 0;
}
double Reconcile_avg(double x,double y){
    return 2./(1. / x + 1. / y);
}