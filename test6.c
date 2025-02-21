// test 4 -- 第五题
#include<stdio.h>
void large_of(double *, double *);

int main(){
    double a, b;

    scanf("%lf%lf", &a, &b);
    large_of(&a, &b);
    printf("%.2f,%.2f", a, b);

    getchar();
    getchar();
    return 0;
}

void large_of(double* x,double* y){
    double large = (*x > *y) ? *x : *y;
    *x = large;
    *y = large;
}